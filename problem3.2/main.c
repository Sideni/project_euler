#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long  nombre = 600851475143LL;
    int diviseur;

   for(diviseur = 2; diviseur < nombre;)
      {
          if(nombre % diviseur == 0)
         {
             nombre = nombre / diviseur;
         }
          else
         {
             diviseur++;
         }
      }
      printf("%d \n",nombre);

  return 0;
}
