#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreY = 1, nombreX = 1, sommeCarre = 0, carreSomme = 0, difference = 0;

    while(nombreY <= 100 && nombreX <= 100)
    {
        sommeCarre = (nombreY * nombreY) + sommeCarre;
        carreSomme = nombreX + carreSomme;
        nombreX++;
        nombreY++;
    }

    carreSomme = (carreSomme * carreSomme);
    difference = carreSomme - sommeCarre;
    printf("%d \n", difference);

    return 0;
}
