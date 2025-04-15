#include "Initstruc.h"
#include <stdio.h>
//#include "ben1.h"
typestud Initstruct(typestud stud)
{
	printf("quel est le numero de billet ?");
	scanf("%s",stud.numMatricule);
	printf("le nom");
	scanf("%s",stud.nom);
	printf("le prenom");
	scanf("%s",stud.prenom);
	printf("quel sa date de naissance?");
	scanf("%s",stud.dateNaiss);
	printf("son etablissement dorigine?");
	scanf("%s",stud.etablissDorigine);
	printf("quels est sa moyenne au bac?");
	scanf("%f",&stud.moyenne);
	
	
	    
FILE *ficdata;  
  
   ficdata = fopen("IT1.txt","at");  
   if (ficdata == NULL) {  
     printf("fichier non ouvert\n");  
   }  
   else  {  
    fprintf(ficdata,"Numero matricule:%s\n nom :%s\n prenom :%s\n date de naissance :%s\n Etablissement dorigine :%s\n Moyenne : %f\n",stud.numMatricule,stud.nom,stud.prenom,stud.dateNaiss,stud.etablissDorigine,stud.moyenne);       
	fclose(ficdata);  
     printf("Ecriture reussite!");  
   }  
return stud;
}