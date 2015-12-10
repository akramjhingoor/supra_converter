#include <stdio.h>
#include <stdlib.h>

int main()
{
     int choixMenu, h, m, s; //ENTIERS
     float tempC, tempF, distKM, distMI, volumeL, volumeG; //REELS

     do //DEBUT DE LA BOUCLE REPETER
     {
         AfficherMenu();
         printf("\nVotre choix ? ");
         scanf("%d", &choixMenu);
         printf("\n");

         //STRUCTURE CONDITIONNELLE
         switch (choixMenu)
         {
             case 1: // SI CHOIXMENU EST EGAL A 1 ALORS
                 printf("Saisir heure(s)\n");
                 scanf("%d", &h);
                 printf("Saisir minute(s)\n");
                 scanf("%d", &m);
                 printf("Saisir seconde(s)\n");
                 scanf("%d", &s);

                 printf("%d h, %d min, %d sec = %d secondes", h, m, s, convertHMStoS(h,m,s));
                 break; //ON SORT DU SWITCH

             case 2:
                 printf("Saisir secondes\n");
                 scanf("%d", &s);
                 printf("%d secondes =", s);
                 //ON ENVOIE L'ADRESSE DE H M ET S
                 decoupeSecondes(&h, &m, &s);
                 printf(" %d heures et %d minutes et %d secondes", h, m, s);
                 break;

             case 3:
                printf("saisir la temperature en degre C\n");
                scanf("%f", &tempC);
                printf("%1.2f degre C = %1.2f degre F", tempC, convertCtoF(tempC));
                break;

             case 4:
                printf("saisir la temperature en degre F\n");
                scanf("%f",&tempF);
                printf("%1.2f degre F = %1.2f degre C", tempF, convertFtoC(tempF));
                break;

             case 5:
                printf("saisir une distance en km\n");
                scanf("%f", &distKM);
                printf("%1.2f km = %1.2f miles", distKM, convertKMtoMI(distKM));
                break;

             case 6:
                printf("saisir une distance en milles\n");
                scanf("%f", &distMI);
                printf("%1.2f mi = %1.2f km",distMI, convertMItoKM(distMI));
                break;

             case 7:
                printf("saisir un volume en litres\n");
                scanf("%f", &volumeL);

                printf("%1.2f L = %1.2f G", volumeL, convertLtoG(volumeL));
                break;

             case 8:
                printf("saisir un volume en gallons\n");
                scanf("%f", &volumeG);

                printf("%1.2f G = %1.2f L", volumeG, convertGtoL(volumeG));
                break;

             case 9:
                printf("Au revoir\n");

         }

         if (choixMenu < 1 || choixMenu > 9)
            printf("Erreur de saisie");

     }   while (choixMenu != 9); //JUSQU'AU TEMPS QUE CHOIXMENU EGAL A 9

     return 0;
}

//AFFICHER MENU
void AfficherMenu()
{
         printf("\n=== Convertisseur ===\n\n");
         printf("Choisir de convertir:\n");
         printf("1. un horaire (H,M,S) en duree en secondes\n");
         printf("2. une duree en secondes en horaire (H,M,S)\n");
         printf("3. une temperature en degre C, en degre Farenheit\n");
         printf("4. une temperature en degre Farenheit, en degre C\n");
         printf("5. une distance en kms, en miles\n");
         printf("6. une distance en milles, en kilometres\n");
         printf("7. un volume en litres, en gallons\n");
         printf("8. un volume gallons, en litres\n");
         printf("9. Quitter le programme");
}
