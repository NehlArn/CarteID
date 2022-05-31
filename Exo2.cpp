#include <stdio.h>
#define TAILLE 1
#include <string>
//remplir tab carte id, 5 pour saisie et affichage faire en fonction.  
typedef struct CID {

	int n_id;
	civ e_civ;
	char* str_nom;
	char* str_prenom;
	Ddn* t_ddn;
	adresse* t_adr;

}Cid;

typedef enum class civ { Homme, Femme } civ;

typedef struct Ddn {

	int n_jour;
	int n_mois;
	int n_annee;

}Ddn;

typedef struct adresse {

	char* str_rue;
	char* str_cp;
	char* str_ville;

}adresse;

int main()
{
	CID* tab_CID = nullptr;
	tab_CID = (CID*)malloc(TAILLE * sizeof(CID));

	saisirCID(tab_CID);
	afficheCID(tab_CID);

	free(tab_CID);
	tab_CID = nullptr;


	return 0;
}

void saisirCID(CID* tab_CID)
{

//Partie Ddn : 

	int n_jour = 0.f;
	int n_mois = 0.f;
	int n_annee = 0.f;

	for (int n_i = 0; n_i < TAILLE; n_i++) {

		printf_s("Entrez le jour : \n");
		scanf_s("%d", &n_jour);
		printf_s("Entrez le mois : \n");
		scanf_s("%d", &n_mois);
		printf_s("Entrez l'annee : \n");
		scanf_s("%d", &n_annee);

		//fflush(stdin);

		if (tab_CID != nullptr) {
			tab_CID[n_i].t_ddn->n_jour = n_jour;
			tab_CID[n_i].t_ddn->n_mois = n_mois;
			tab_CID[n_i].t_ddn->n_annee = n_annee;

		}
	}

//Partie adresse :

	char* str_voie = (char*)malloc(sizeof(char));
	char* str_code = (char*)malloc(sizeof(char));
	char* str_town = (char*)malloc(sizeof(char));

	for (int n_i = 0; n_i < TAILLE; n_i++)
	{
		printf_s("Entrez le jour : \n");
		scanf_s("%s", &str_voie);
		printf_s("Entrez le mois : \n");
		scanf_s("%s", &str_code);
		printf_s("Entrez l'annee : \n");
		scanf_s("%s", &str_town);

		if (str_voie != nullptr) {

			tab_CID[n_i].t_adr->str_rue = str_voie;
			tab_CID[n_i].t_adr->str_cp = str_code;
			tab_CID[n_i].t_adr->str_ville = str_town;

		}
	}

	free(str_voie);
	free(str_code);
	free(str_town);

//Partie CID : 

	int n_nbrmoi = nullptr;
	strcpy_s(tab_CID[0].e_civ, TAILLE, "Homme");
	tab_CID.str_genre = "Homme";
	char* str_nom = nullptr;
	char* str_prenom = nullptr;



	for (int n_i = 0; n_i < TAILLE; n_i++) {

		printf_s("Entrez votre num�ro de carte : \n");
		scanf_s("%d", &n_nbrmoi);
		printf_s("Entrez votre nom : \n");
		scanf_s("%s", &str_nom);
		printf_s("Entrez votre pr�nom : \n");
		scanf_s("%s", &str_prenom);

		if (tab_CID != nullptr) {
			tab_CID[n_i].n_id = n_nbrmoi;
			tab_CID[n_i].flt_mx = str_nom;
			tab_CID[n_i].flt_my = str_prenom;

		}

	}
}

void afficheCID(CID* tab_CID)
{
	printf_s("Votre Carte : \n");

	for (int n_i = 0; n_i < TAILLE; n_i++) {

		if (tab_CID != nullptr) {
			printf_s("Num : %d\n", tab_CID[n_i].n_id);
			printf_s("Genre : %s\n", tab_CID[n_i].e_civ);
			printf_s("Nom : %s\n", tab_CID[n_i].str_nom);
			printf_s("prenom : %s\n", tab_CID[n_i].str_prenom);
			printf_s("Date de naissance : %s\n", tab_CID[n_i].t_ddn->n_annee);
			printf_s("/ %s", tab_CID[n_i].t_ddn->n_jour);
			printf_s("/ %s", tab_CID[n_i].t_ddn->n_mois);
			printf_s("Adresse :")

		}

	}

}


