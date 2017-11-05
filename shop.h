#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

const int N_max = 20;
const int M_max = 20;

typedef struct probleme {
	int nb_machine;
	int nb_piece;
	int machine[N_max + 1][M_max + 1];
	int duree[N_max + 1][M_max + 1];
	int position[N_max + 1][M_max + 1];
	int nb_operation_piece[N_max + 1];
	int numero_derniere_piece[M_max + 1];
}prob_T;

typedef struct operation {
	int piece;
	int machine;
 }operation_T;

typedef struct solution {
	int duree_plus_tot[N_max * M_max + 1];
	int stop; //makespan
	operation_T chemin_critique[N_max * M_max + 1];
}solution_T;

void lire_fichier(string nom, prob_T &prb);
int * generer_vecteur_aleatoire(int nb_jobs, int nbr_machine);
int verifier_vect(int nb_mach, int nb_piece, int * vect);
void evaluer(prob_T &probleme, int * vect, solution_T & sol);