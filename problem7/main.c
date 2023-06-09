#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableauDePremiers[10001] = {2, 3, 5, 7, 11, 13, 17, 19};
    int j = 0;
    long long nombre = 2;
    int nombreDeNombresPremiers = 0;

    for(nombreDeNombresPremiers = 8; nombreDeNombresPremiers < 10001;)
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
    printf("Quel nombre premier voulez-vous ?\n");
    scanf("%d", &j);
    printf("%d \n", tableauDePremiers[j-1]);


    return 0;
}
