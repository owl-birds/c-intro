#include <stdio.h>
//function

void addd(int a, int b)
{
    int res = a * b;
    printf("%i", res);
}

void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;

}

int main()
{
    int a = 99;
    int b = 33;
    addd(10, 20222);


    printf("a %i", a);
    printf("b %i", b);

    change(&a, &b);

    printf("\na %i\n", a);
    printf("b %i", b);

    return 0;
}
