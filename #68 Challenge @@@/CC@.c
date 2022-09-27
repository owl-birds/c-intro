#include <stdio.h>
#include <stdlib.h>

void sqr(int *num);
int sqr2(int **pnum);

int main()
{
    int a = 10;
    int *pa = &a;
    int *b = malloc(sizeof(int));
    *b = 9;
    sqr2(&pa);
    sqr(&a);
    sqr(b);
    printf("a::%i\n", a);
    printf("b::%i\n", *b);

    return 0;
}

void sqr(int *num)
{
    *num = *num * *num;
}

int sqr2(int **pnum)
{
    **pnum = **pnum * **pnum;
}
