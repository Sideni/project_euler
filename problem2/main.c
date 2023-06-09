#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nombreUn = 0, nombreDeux = 2, nombreTrois = 1, somme = 0;

    while(nombreUn <= 4000000)
    {
        if(nombreTrois % 2 == 0)
        {
            somme = somme + nombreTrois;
        }
        nombreUn = nombreDeux + nombreTrois;
        nombreTrois = nombreDeux;
        nombreDeux = nombreUn;
    }

    if(nombreTrois % 2 == 0 && nombreTrois <= 4000000)
    {
        somme = somme + nombreTrois;
    }

    if(nombreDeux % 2 == 0 && nombreDeux <= 4000000)
    {
        somme = somme + nombreDeux;
    }


    printf("%d \n", somme);

    return 0;
}
