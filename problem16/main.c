#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[302] = {0};
    int i = 0, j = 0;
    int longueur = 1;
    char temp = 0; //Variable temporaire
    int somme = 0;
    char base = 2; //La base de notre expression exponentielle
    int exposant = 1000;
    char plus = 0;

    nombre[0] = base;

    for(i = exposant; i > 1; i--) // le nombre de fois qu'on entre dans la boucle == l'exposant
    {
        for(j = longueur; j >= 0; j--)
        {
            temp = nombre[j] * base; //On stocke le résultat pour y faire des opérations (On multiplie le chiffre du tableau par la Base)
            nombre[j] = temp % 10; //On garde la position des unités
            nombre[j + 1] += temp / 10; //S'il y a une dizaine, on le met au prochain dans le tableau
            if(j + 1 == longueur && temp / 10 != 0)
            {
                plus = 1;
            }
        }
        if(plus)
        {
            longueur++;
            plus = 0;
        }
    }
    for(i = 0; i < longueur; i++)
    {
        somme += nombre[i];
        printf("%d", nombre[longueur - i -1]);
    }
    printf(" %d", somme);


    return 0;
}
