#include <stdio.h>
//checking even or odd number
int main()
{
    int num, remain;

    printf("Enter a number:: ");
    scanf("%i", &num);
    remain = num % 2;
    if (remain == 0)
    {
        printf("%i this is a even number", num);
    }
    else
    {
        printf("%i this is a odd number", num);
    }

    return 0;
}
