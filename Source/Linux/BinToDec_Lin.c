// Author : IsatiX / Aredix
// Date : 16/10/2018 (FR Format)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double temp = 0;
    int longueur;
    int valeur;
    int k=0;
    int resultat;

    /* Déclaration du tableau dynamique */

    system("clear");
    printf("Longueur du nombre binaire :\n");
    scanf("%d", &longueur);
    int tabBinaire[longueur];
    int i = longueur;
    int j = longueur;
    system("clear");

    /* Déclaration du nombre binaire à convertir */
    
    printf("Valeur binaire :\n");
    scanf("%d", &valeur);


    /* mise dans le tableau du nombre binaire */

    while (i>0 )
    {
        tabBinaire[i-1]=valeur%10;
        valeur=valeur/10;
        i--;
    }

    /* Calcul de la valeur décimal */

    while (j>0)
    {

        /* Vérification de la valeur dans le tableau */

        if (tabBinaire[j-1]==1 || tabBinaire[j-1] ==0)
        {
            if (tabBinaire[j-1]==1)
            {
                temp = temp + pow(2, k);
            }
            k++;
        }

        /* Si la valeur est différente de 1 ou de 0 on sort du programme */

        else
        {
            printf("Votre nombre n'est pas au format binaire ! \n");
            break;
        }
        j--;
        system("clear");
        resultat = temp; // converstion de la valeur de float à int
        printf("Resulat : %d\n", resultat); // Affichage du résultat de la conversion
    }

return 0;
}