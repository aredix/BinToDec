#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double temp = 0;
    int longueur;
    int valeur;
    int k=0;

    printf("Longueur du nombre binaire :\n");
    scanf("%d", &longueur);
    int tabBinaire[longueur];
    int i = longueur;
    int j = longueur;
    //system("cls");

    printf("longueur : %d\n", longueur);
    printf("Valeur binaire :\n");
    scanf("%d", &valeur);


    /* mise dans le tableau du nombre binaire */

    while (i>0 )
    {
        tabBinaire[i-1]=valeur%10;
        valeur=valeur/10;
        i--;
    }

    printf(" val tab [3] : %d\n", tabBinaire[3]);
    printf(" val tab [2] : %d\n", tabBinaire[2]);
    printf(" val tab [1] : %d\n", tabBinaire[1]);
    printf(" val tab [0] : %d\n", tabBinaire[0]);
    /* Calcul de la valeur décimal */

    while (j>0)
    {
        printf("val de k : %d\n", k);
        printf("val de tab de k : %d\n", tabBinaire[k]);
        temp = temp + pow(2, tabBinaire[k]);
        k=k+1;
        j--;
    }

    //system("cls");
    printf("Resulat : %f\n", temp);

return 0;
}