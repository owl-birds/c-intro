#include <stdio.h>
//simple nested loop
int main()
{
    int i,j,check,sum;
    check = 5;

    for (i = 0; i < check; i += 1)
    {
        sum = 0;
        for (j = 1;j <= i; j += 1)
        {
            sum += j;
        }
        printf("%i the sum:: %i\n", i, sum);
    }

    return 0;
}
