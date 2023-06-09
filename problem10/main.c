#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableauDePremiers[500000] = {2, 3, 5, 7, 11, 13, 17, 19};
    int j = 0;
    long long nombre = 2;
    int nombreDeNombresPremiers = 0;
    long long somme = 0LL;

    for(nombreDeNombresPremiers = 8; nombreDeNombresPremiers < 500000;)
    {
        for(j = 0; j < nombreDeNombresPremiers; j++)
        {
            if(nombre % tableauDePremiers[j] == 0)
            {
                nombre++;
                break;
            }
        }

        if(j == nombreDeNombresPremiers)
        {
            tableauDePremiers[j] = nombre;
            nombreDeNombresPremiers++;
            nombre++;
        }
    }
    printf("%d \n", tableauDePremiers[j]);

    for(j=0; tableauDePremiers[j] < 2000000; j++)
    {
        somme = somme + tableauDePremiers[j];
    }
    printf("%I64d \n", somme);


    return 0;
}
