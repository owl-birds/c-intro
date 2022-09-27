#include <stdio.h>
#include <string.h>

void change(int *a, int *b);

int main()
{
    char name[50];
    int *a;
    int b = 50;
    int c = 100;
    change(&b,&c);
    a = &b;
    printf("%i\n", b);
    printf("%i\n", *a);
    *a = 900;
    printf("%i\n", *a);
    printf("%i\n", b);
    a = &c;
    printf("%i\n", *a);

    return 0;
}

void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
