#include <stdio.h>

// dvisors sum
int main()
{
    int num, i, dsum;
    i = 0;
    dsum = 0;
    printf("Enter a number:: ");
    scanf("%i", &num);

    while (i < num)
    {
        i += 1;
        if (num % i == 0)
        {
            dsum = dsum + i;
            printf("\ndiv:: %i\n", i);
        }
    }

    printf("\ndivisors sum:: %i", dsum);

    return 0;
}
