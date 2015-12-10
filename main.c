#include <stdio.h>
#include <stdlib.h>

int menu() //Fonction pour mettre le menu princpial en evidence et le départagé des autres
{

    int choix = 0; //Initialisation de choix à 0

    while(choix < 1 || choix > 5)
    {

        //Menu principal où on peut choisir la conversion dans quel domaine
        printf("--Bienvenue sur l'application Supra_converter--\n\n");
         //Touche personnelle
        printf("----Menu principal----\n\n");
        printf("1. Temperature\n");
        printf("2. Temps\n");
        printf("3. Distance\n");
        printf("4. Volume\n");
        printf("5. Quitter le programme !\n");
        printf("\nQuel est votre choix ? ");
        scanf("%d", &choix);
    }
    return choix; //On retourne a int choix
}
int main()
{
	int choice, nav =1, valeur1 = 0, resultat = 0, restart, j, min, h, s;
	char choixTemp, choixTime, choixDist, choixVol;

    do
    {
        switch (choice = menu())
        {


            //température
            case 1:
                printf("Vous avez choisi la temperature\n");
                printf("Pour une conversion : (a/b)\na. De Celsius vers Fahrenheit \nb. De Fahrenheit vers Celsius ? ");

                fflush(stdin); //To void the buffer
                scanf("%c", &choixTemp);
                if (choixTemp == 'a')
                {
                    do{
                    printf("\n\nEntrez la valeur : ");
                    scanf("%d", &valeur1);

                    //Formule de C à F
                    resultat = valeur1*9/5 + 32;
                      printf("La temperature en Fahrenheit pour %d C est %d F ", valeur1, resultat);
                    printf("\nOn recommence ?(Oui = 1/Non = 0) ");
                    scanf("%d", &restart);
                    } while(restart !=0);

                }
                else if(choixTemp == 'b')
                {
                    do{
                    printf("Entrez la valeur : ");
                    scanf("%d", &valeur1);

                    //Formule de F à C
                    resultat = (valeur1 - 32) * 5/9;

                    printf("La temperature en Celsius pour %d °F est %d °C ",valeur1, resultat);
                    printf("\nOn recommence ?(Oui = 1/Non = 0) ");
                    scanf("%d", &restart);
                    } while(restart !=0);

                }
                else
                {
                    printf("Incompréhension du choix");
                }
            break;

            //Temps
            case 2:
                printf("Vous avez choisi le temps\n");
                printf("Pour une conversion :\na. De secondes a jours, heures, minutes et secondes \nb. De jours, heures, minutes et secondes  a secondes? (a/b) ");
                fflush(stdin);
                scanf("%c", &choixTime);

                if (choixTime == 'a')
                {
                    do{
                        printf("\nEntrez le nombre de secondes : ");
                        scanf("%d", &s);

                    //Formule pour lavoir en heures, minutes et secondes
                        j = s/86400;
                        s = s % 86400;
                        h = s/3600;
                        s = s % 3600;
                        min = s/60;
                        s = s % 60;

                    printf("\n\nCela correspond donc a %d jours, %d heures, %d minutes, %d secondes ",j,h,min,s);
                    printf("\nOn recommence ?(Oui = 1/Non = 0)");
                    scanf("%d", &restart);
                    } while(restart !=0);
                }
                else if (choixTime == 'b')
                {
                    do{
                    printf("Entrez le nombre de jours : ");
                    scanf("%d", &j);
                    printf("Entrez le nombre d'heures : ");
                    scanf("%d", &h);
                    printf("Entrez le nombre de minutes: ");
                    scanf("%d", &min);
                    printf("Entrez le nombre de secondes: ");
                    scanf("%d", &s);

                    //Formule pour lavoir en secondes
                    resultat = j*86400 + h*3600 + min*60 + s;

                    printf("\n\nPour %d jours, %d heures, %d minutes, %d secondes, cela correspond a %d secondes",j,h,min,s,resultat);
                    printf("\nOn recommence ?(Oui = 1/Non = 0)");
                    scanf("%d", &restart);
                    } while(restart !=0);
                }
                else
                {
                    printf("Hmm incompréhension du choix");
                }
            break;

            //Distance
            case 3:
                printf("Vous avez choisi la distance\n");
                printf("Pour une conversion :\na. En kilometres \nb. En miles ? (a/b) ");
                fflush(stdin);
                scanf("%c", &choixDist);

                if (choixDist == 'a')
                {
                    do{
                    printf("\nEntrez la distance en miles : ");
                    scanf("%d", &valeur1);

                    //Formule de miles a km
                    resultat = valeur1 * 1.609;
                    printf("\n\n %d mi correspond a %d km",valeur1,resultat);
                    printf("\nOn recommence ?(Oui = 1/Non = 0) ");
                    scanf("%d", &restart);
                    } while(restart !=0);
                }
                else if (choixDist == 'b')
                {
                    do{
                    printf("Entrez la distance en kilometres : ");
                    scanf("%d", &h);

                    //Formule de km a miles
                    resultat = valeur1 * 0.6215;

                    printf("\n\n %d km correspond a %d mi",valeur1,resultat);
                    printf("\nOn recommence ? (Oui = 1/Non = 0) ");
                    scanf("%d", &restart);
                    } while(restart !=0);
                }
                else
                {
                    printf("Hmm incompréhension du choix");
                }
            break;

            //Volume
            case 4:
                printf("Vous avez choisi le volume\n");
                printf("Pour une conversion : (a/b)\na. En litres \nb. En gallons? ");
                fflush(stdin);
                scanf("%c", &choixVol);

                if (choixVol == 'a')
                {
                    do{
                    printf("\nEntrez le volume en gallons: ");
                        scanf("%d", &valeur1);

                    //Formule de gallons a litres

                        resultat = valeur1 * 3.788;

                        printf("\n\n %d gal correspond a %d L",valeur1,resultat);
                    printf("\nOn recommence ?(Oui = 1/Non = 0) ");
                    scanf("%d", &restart);
                    } while(restart !=0);
                }
                else if (choixVol == 'b')
                {
                    do{
                    printf("Entrez le volume en gallons: ");
                    scanf("%d", &h);

                    //Formule de litres a gallons
                    resultat = valeur1 * 0.264;

                    printf("\n\n%d L correspond a %d gal",valeur1,resultat);
                    printf("\nOn recommence ?(Oui = 1/Non = 0) ");
                    scanf("%d", &restart);
                    } while(restart !=0);
                }
                else
                {
                    printf("Hmm incompréhension du choix");
                }
            break;

            case 5:
            break;

            default :
                printf("Votre choix n'est pas compréhensible");
            break;

        }
    system("PAUSE");
    printf("Revenir au menu ? \n");
    printf("Oui\n");
    printf(" -Ou- \n");
    printf("Non (Oui = 1/Non = 0)\n");
    fflush(stdin);
    scanf("%d", &nav);

    }while(nav != 0);

	return 0;
}
