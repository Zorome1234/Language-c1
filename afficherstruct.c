#include "afficherstruc.h"
#include <stdio.h>
typestud afficherstruct(typestud stud){
	printf("Numero matricule :%s\n nom:%s\n prenom:%s\n date de naissance:%s\n etablissement d'origine:%s\n sa moyenne%f\n",stud.numMatricule,stud.nom,stud.prenom,stud.dateNaiss,stud.etablissDorigine,stud.moyenne);
	return stud;
}