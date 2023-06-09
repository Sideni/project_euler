#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long nombre = 1LL;

    while(nombre % 2 != 0 || nombre % 3 != 0 || nombre % 4 != 0 || nombre % 5 != 0 || nombre % 6 != 0 || nombre % 7 != 0 || nombre % 8 != 0 || nombre % 9 != 0 || nombre % 10 != 0 || nombre % 11 != 0 || nombre % 12 != 0 || nombre % 13 != 0 || nombre % 14 != 0 || nombre % 15 != 0 || nombre % 16 != 0 || nombre % 17 != 0 || nombre % 18 != 0 || nombre % 19 != 0 || nombre % 20 != 0)
    {
        nombre++;
    }
    printf("%I64d \n", nombre);

    return 0;
}
