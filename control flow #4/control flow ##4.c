#include <stdio.h>
#include <stdlib.h>

int main()
{
    // power program
    int num, pow, i, res;

    printf("Enter a number:: ");
    scanf("%i", &num);
    printf("power:: ");
    scanf("%i", &pow);

    res = 1;
    i   = 0;
    while (i < pow)
    {
        res *= num;
        i += 1;
    }

    printf("\n\n\npower result :: %i", res);
    return 0;
}

