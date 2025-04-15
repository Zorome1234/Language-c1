#ifndef STRUCT_H
#define STRUCT_H
struct etudiant
{
	char numMatricule[50];
	char nom[50];
	char prenom[50];
	char dateNaiss[50];
	char etablissDorigine[50];
	float moyenne;
};
typedef struct etudiant typestud;
#endif