#include <stdio.h>

//factorial
int main()
{
    int num, i, a;
    int result;

    printf("Enter a num:: ");
    scanf("%i", &num);
    a = num;
    i = 0;
    result = 1;


    while (i < num)
    {
        i = i + 1;
        result = result * a;
        a = a - 1;
    }


    printf("the result of the factorial %i:: %i", num, result);


    return 0;
}
