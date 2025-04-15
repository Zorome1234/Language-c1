#ifndef STRUCT_H
#define STRUCT_H
struct etudiant
{
	char num_billet[100];
	char nom[50];
	char prenom[50];
	int  poids;
	int  poids_bagages_main;
    int  poids_bagages_soute;
};
typedef struct etudiant typestud;
#endif