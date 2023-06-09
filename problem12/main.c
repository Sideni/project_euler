#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreTri = 0;
    int nombreTemp = 0;
    int compteur = 0;
    int nombreFacteur = 0;
    int j, diviseur;

    for(j = 1; nombreFacteur < 500; j++) //Si on arrive à 500 facteurs, on sort de la boucle
    {
        nombreTri = nombreTri + j;
        nombreTemp = nombreTri;


        for(diviseur = 2; diviseur <= nombreTemp;) //Compte le nombre de facteurs de nombre triangulaire
        {
            if (nombreTemp % diviseur == 0)
            {
                nombreTemp = nombreTemp / diviseur;
                compteur++;
                printf("%d %d\n", nombreTri, compteur);
                system("pause");
            }
            else
            {
                if(nombreFacteur == 0 && compteur > 0)
                {
                    nombreFacteur = compteur + 1;
                }
                else if(compteur > 0)
                {
                    nombreFacteur = nombreFacteur * (compteur + 1);
                }
                compteur = 0;
                diviseur++;
            }
            //printf("%d %d\n", nombreTri, nombreFacteur);


        }
        compteur = 0;
        if(nombreFacteur == 500)
        {
            printf("%d", nombreTri); //On affiche le nombre triangulaire
            return 0;
        }
        else
        {
            nombreFacteur = 0;
        }
    }
    return 0;
}
