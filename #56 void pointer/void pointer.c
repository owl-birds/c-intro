#include <stdio.h>
#include <stdlib.h>

//void pointer can point to anytype data

int main()
{
    int num1 = 100;
    float num2 = 2.42;
    char a = 'a';

    void *vptr = NULL;

    vptr = &num1;
    printf("num1(vptr)   :: %i\n", *(int*)vptr);

    printf("num1 + 100   :: %i\n", *(int*)vptr + 100);

    vptr = &num2;
    printf("num2(vptr)   :: %f\n", *(float*)vptr);

    vptr = &a;
    printf("char(a)(vptr):: %c\n", *(char*)vptr);


    return 0;
}
