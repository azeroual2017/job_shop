#pragma once
#include <msclr\marshal_cppstd.h>

#include <sstream>
#include "shop.h"
namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace msclr::interop;

	/// <summary>
	/// Description résumée de form_main
	/// </summary>
	public ref class form_main : public System::Windows::Forms::Form
	{
	public:
		form_main(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~form_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(623, 424);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Evaluer Sol. JS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_main::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"nbe d\'evaluation du graphe : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Lancer l\'algorithme genetique";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form_main::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(154, 60);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(463, 460);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(506, 15);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"10";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(24, 160);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &form_main::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(320, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"nbe d\'evaluation de choromosomes :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Fichier en cours :";
			// 
			// form_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 532);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"form_main";
			this->Text = L"form_main";
			this->Load += gcnew System::EventHandler(this, &form_main::form_main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form_main_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//	this->Close();
		Application::Exit();

	}



	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
		//= "C:/Users/moazeroual/Desktop/TP_AAD/la01.txt";
		msclr::interop::marshal_context context;
		System::String^ contenu ="C:/Users/mohammed/Desktop/tp_outil_aide/tp02/TP_AAD/" + textBox3->Text;
		std::string nom = context.marshal_as<std::string>(contenu);
		prob_T la01;
		solution_T sol;
		lire_fichier(nom, la01);
		int * vect = generer_vecteur_aleatoire(la01.nb_piece, la01.nb_machine);
	/*	vect[0] = 1;
		vect[1] = 0;
		vect[2] = 0;
		vect[3] = 0;
		vect[4] = 2;
		vect[5] = 1;
		vect[6] = 1;
		vect[7] = 2;
		vect[8] = 2;*/   
		evaluer(la01,vect,sol);
		System::String^ contenu_zone;

		int result1;
		int result2;
		for (int i = 0; i < la01.nb_piece; ++i) {
			for (int j = 0; j < la01.nb_machine; ++j) {
				result1 = la01.machine[i][j];
				result2 = la01.duree[i][j];

				contenu_zone = contenu_zone + System::Convert::ToString(result1) + "  " + System::Convert::ToString(result2) + "       " ;
			}
			contenu_zone = contenu_zone + "\n" ;
		}

		contenu_zone = contenu_zone + "\n" + "tableau position \n";

		for (int i = 0; i < la01.nb_piece; ++i) {
			for (int j = 0; j < la01.nb_machine; ++j) 
			{
				result1 = la01.position[i][j];

				contenu_zone = contenu_zone + System::Convert::ToString(result1) + "    ";
			}
			contenu_zone = contenu_zone + "\n";
		}
		contenu_zone = contenu_zone + "\n tableau de numero_derniere_piece\n";
		for (int j = 0; j < la01.nb_machine; ++j)
		{
			result1 = la01.numero_derniere_piece[j];

			contenu_zone = contenu_zone + System::Convert::ToString(result1) + "    ";
		}

		contenu_zone = contenu_zone + "\n tableau de nb_oper_piece \n";

		for (int j = 0; j < la01.nb_piece; ++j)
		{
			result1 = la01.nb_operation_piece[j];

			contenu_zone = contenu_zone + System::Convert::ToString(result1) + "    ";
		}
		contenu_zone = contenu_zone + "\n vecteur de beirwith \n";

		for (int i = 0; i < la01.nb_piece*la01.nb_machine; i++)
		{
			result1 = vect[i];
			contenu_zone = contenu_zone + System::Convert::ToString(result1) + "   ";
		}
		contenu_zone = contenu_zone + "\n foction verifier \n";
		result1 = verifier_vect(la01.nb_machine, la01.nb_piece,vect);
		contenu_zone = contenu_zone + System::Convert::ToString(result1);
		contenu_zone = contenu_zone + "\n makespan \n";
		result1 = sol.stop;
		contenu_zone = contenu_zone + System::Convert::ToString(result1);
		richTextBox1->Text = contenu_zone;
		/*System::String^ contenu;

		msclr::interop::marshal_context context;
		std::string standardString = context.marshal_as<std::string>(contenu);
		
		System::String^ contenu_zone = textBox1->Text;

		richTextBox1->Text = contenu_zone;*/


	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

// a faire
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
