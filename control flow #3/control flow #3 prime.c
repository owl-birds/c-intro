#include <stdio.h>

int main()
{
    int num, i, check, remain;

    printf("Enter a number:: ");
    scanf("%i", &num);
    i = 1;
    check = 0;
    while (i <= num)
    {
        remain = num % i;
        if (remain == 0)
        {
            check += 1;
        }
        i += 1;
    }
    if (check == 2)
    {
        printf("%i this is a prime number", num);
    }
    else
    {
        printf("%i this is not a prime number", num);
    }

    printf("\n\n\n%i", check);
    return 0;
}
