#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double reponse = 0.0;
    int i = 1;

    while(i <= 10)
    {
        reponse = reponse + pow(i, i);
        i++;
    }

    printf("%f \n", reponse);

    return 0;
}
