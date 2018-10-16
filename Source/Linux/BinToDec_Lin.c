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
    
    printf("Longueur du nombre binaire :\n");
    scanf("%d", &longueur);
    int tabBinaire[longueur];
    int i = longueur;
    int j = longueur;
    system("clear");

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

        if (tabBinaire[j-1]==1 || tabBinaire[j-1] ==0)
        {
            if (tabBinaire[j-1]==1)
            {
                temp = temp + pow(2, k);
            }
            k++;
        }
        else
        {
            printf("Votre nombre n'est pas au format binaire ! ");
        }
        j--;
    }

    system("clear");
    resultat = temp;
    printf("Resulat : %d\n", resultat);

return 0;
}