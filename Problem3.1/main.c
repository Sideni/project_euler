#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long nombre = 600851475143LL, grandFacteur = 0, petitFacteur = 0, i = 1, x = 2;

    while(i < nombre )
    {
        if(nombre % i == 0)
        {
            while(i % x != 0 && x != nombre)
            {
                x++;
            }
            if(i == x)
            {
                petitFacteur = i;

                if(petitFacteur > grandFacteur)
                {
                    grandFacteur = petitFacteur;
                }
            }
        }

        i++;
        x = 2;
    }

    printf("%I64d \n", grandFacteur);

    return 0;
}
