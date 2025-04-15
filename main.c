#include <stdio.h>
#include <stdlib.h>
#include "ben.h"
#include "Initstruc.h"
#define	N 200
#include "afficherstruc.h"
//#include "calcul_poids.h"
	int nb,i;
 typestud stud;
 typestud IT1[N];
void AJOUTCANDIDATS(){
 printf("quel et le nombre d etudiant que vous souhaitez enregistrer?");
 scanf("%d",&nb);

for(i=0;i<nb;i++)
{
	IT1[i]= Initstruct(stud);
}
	}
	void AFFICHERCANDIDATS()
	{
	for( i=0;i<nb;i++)
{
	afficherstruct(IT1[i]);
}
}
	             
	
	 
	 int main(int argc, char *argv[]){
	 
	 int choix;
	 do{
	 	printf("1-voulez vous ajouter des renseignement sur des passagers??\n\n");
	 	printf("2-voulez vous afficher la liste des candidats?\n\n");
	 	printf("3-voulez vous modifiez les information d'ub candidat?\n\n");
	 	printf("4-quittez?\n\n");
	 	scanf("%d",&choix);
	 	switch(choix)
	 		{
		case 1: AJOUTCANDIDATS();
		break;
		case 2: AFFICHERCANDIDATS();
		break;
	/*	case 3:MODIFIERCANDIDATS();
		break;*/
	case 4: printf("AU REVOIR!");
			break;
		default :printf("CHOIX INVALIDE\n");
	}
	}while(choix!=4);
	 
	return 0;
 }