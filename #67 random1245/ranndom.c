#include <stdio.h>
#include <stdlib.h>

// pass by reference

void change(int *a, int *b);

int main()
{
    int a,b;
    a = 100;
    b = 200;
    printf("before\na::%i\n", a);
    printf("b::%i\n", b);
    change(&a,&b);
    printf("after\na::%i\n", a);
    printf("b::%i\n", b);
    return 0;
}

void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
