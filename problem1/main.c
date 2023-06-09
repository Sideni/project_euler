#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nombre = 0;
   int somme = 0;


    while (nombre < 1000)
    {

    if(nombre % 5 == 0 || nombre % 3 == 0)
    {
         somme = somme + nombre;
    }

    nombre++;
    }

    printf("%d \n", somme);

    return;
}
