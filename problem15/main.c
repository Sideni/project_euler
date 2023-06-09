#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int largeur = 20;
    int somme = 0;

    for(i = 1; i <= largeur; i++)
    {
        somme = somme + (i * i * (i - 1));
    }
    somme -= 2;
    printf("%d", somme);
    return 0;
}
