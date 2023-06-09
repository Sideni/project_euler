#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, c = 0;
    const int test = 1000;

    for (a = 1; a <= (test - 2); a++)
    {
        if(((c*c) == (a*a + b*b)) && (test == (a + b + c)))
        {
            printf("%d\n", (a*b*c));
            printf("%d, %d, %d\n", a, b, c);
            break;
        }
        for (b = a + 1; b <= (test - 2); b++)
        {
            if(((c*c) == (a*a + b*b)) && (test == (a + b + c)))
            {
                printf("%d\n", (a*b*c));
                printf("%d, %d, %d\n", a, b, c);
                break;
            }
            for (c = b + 1; c <= (test - 2); c++)
            {
                if(((c*c) == (a*a + b*b)) && (test == (a + b + c)))
                {
                    printf("%d\n", (a*b*c));
                    printf("%d, %d, %d\n", a, b, c);
                    return 0;
                }
            }
        }
    }
    return 0;
}
