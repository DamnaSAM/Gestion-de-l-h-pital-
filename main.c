#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void creationpatient(){
 printf("creation dun nouveau patient. \n");
 }
 void afficherlistespatients() {
 printf("liste des patients:\n")
 }
     int main()
{
     int choix;
  do{
    printf(" \n___________________________BIENVENU AU MENU DU PATIENT____________________________\n");
    printf("    \n \t \t 1. creer un nouveau patient\n ");
    printf("    \n \t \t 2. afficher la liste des patients\n ");
    printf("    \n \t \t 3. quitter\n ");
    printf("    \n \t \t choisissez une option(entre un nombre entre 1&3): ");
    scanf("%d", &choix);sss
    system("cls");
  switch (choix){
 case 1:
    creationpatient();
    break;
 case 2:
    afficherlistespatients();
    break;
 case 3:
    printf("    \n \t \t AU REVOIR ET A LA PROCHAINE!\n ");
    break;
 default:
    printf("option invalide. veillez choisir une option valide.\n");
      }
  } while (choix != 3);

 return 0;
}
