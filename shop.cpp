#include "stdafx.h"
#include "shop.h"

using namespace std;


void lire_fichier(string nom, prob_T &prb)
{
	ifstream fichier(nom);
	string ligne_N;
	string ligne_A;
	int i = 0;
	int a = 0;
	int b = 0;
	getline(fichier, ligne_N);
	istringstream iss(ligne_N);
	int nb_machine;
	int nb_piece;
	iss >> nb_piece;
	iss >> nb_machine;
	prb.nb_machine = nb_machine;
	prb.nb_piece = nb_piece;
	for (int x = 0; x < prb.nb_piece; ++x) {
		getline(fichier, ligne_N);
		istringstream iss(ligne_N);
		for (int y = 0; y < prb.nb_machine; ++y) {
			iss >> a;
			iss >> b;
			prb.machine[x][y] = a;
			prb.position[x][a] = x*prb.nb_machine + y;
			prb.duree[x][y] = b;
			prb.numero_derniere_piece[y] = -1;
		}
		prb.nb_operation_piece[x] = 0;
	}

}
int * generer_vecteur_aleatoire(int nb_jobs, int nbr_machine)
{
	int * vect = new int [N_max*M_max];
	int j = nb_jobs;
	int M[N_max];
	int N[N_max];
	int nombre_aleatoire = 0;
	int job = 0;
	for (int i = 0; i < nb_jobs; i++)
	{
		M[i] = nbr_machine;
		N[i] = i;
	}
	for (int i = 0; i < nb_jobs*nbr_machine; i++)
	{
		nombre_aleatoire = (rand() % j);
		job = N[nombre_aleatoire];
		vect[i] = job;
		M[job] = M[job]-1;
		if (M[job] == 0)
		{
			N[nombre_aleatoire] = N[j - 1];
			N[j - 1] = job;
			j--;
		}
	}
	return vect;
}
int verifier_vect(int nb_mach, int nb_piece, int * vect) {
	int p, resultat = 1;
	int taille = nb_piece*nb_mach;
	int * ver = new int[nb_piece];
	for (int i = 0; i < nb_piece; i++) {
		ver[i] = 0;
	}
	for (int i = 0; i < taille; i++) {
		p = vect[i];
		ver[p] ++;
	}
	int i = 0;
	while ((resultat !=0) && (i < nb_piece)) {
		if (ver[i] != nb_mach) 
				resultat = 0;
		i++;
	}
	return resultat;
}

void initialiser_solution(solution_T & sol)
{
	sol.stop = 0;
	for (int i = 0; i < N_max* M_max; i++) {
		sol.duree_plus_tot[i] = 0;
	}
}
void evaluer(prob_T & probleme, int * vect, solution_T & sol) {
	int numero_piece; // les pieces commencent à 0
	int numero_derniere_piece;
	int machine; // les machines commencent à 0
	int position; // donne la positon d'une operation dans la solutiion
	int position_derniere_oper;
	initialiser_solution(sol);
	int date_plus_tot;
	for (int i = 0; i < probleme.nb_machine*probleme.nb_piece; i++) {
		numero_piece = vect[i];
		probleme.nb_operation_piece[numero_piece] ++;
		machine = probleme.machine[numero_piece][probleme.nb_operation_piece[numero_piece]-1]; 
		position = probleme.position[numero_piece][machine];
		if (probleme.nb_operation_piece[numero_piece] > 1)
		{
			date_plus_tot = sol.duree_plus_tot[position - 1] + probleme.duree[numero_piece][probleme.nb_operation_piece[numero_piece]-2];
			if (date_plus_tot > sol.duree_plus_tot[position]) {
				sol.duree_plus_tot[position] = date_plus_tot;
			}
		}
		if (probleme.numero_derniere_piece[machine] != -1) 
		{
			numero_derniere_piece = probleme.numero_derniere_piece[machine];
			position_derniere_oper = probleme.position[numero_derniere_piece][machine];
			date_plus_tot = sol.duree_plus_tot[position_derniere_oper] + probleme.duree[numero_derniere_piece][probleme.nb_operation_piece[numero_derniere_piece]-1];
			if (date_plus_tot > sol.duree_plus_tot[position]) {
				sol.duree_plus_tot[position] = date_plus_tot;
			}
		}
		probleme.numero_derniere_piece[machine] = numero_piece;


	}
	sol.stop = date_plus_tot + probleme.duree[numero_piece][probleme.nb_machine -1]; // la durée de derniere operation dans la piece numero_piece


}
