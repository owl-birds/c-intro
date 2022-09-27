#include <stdio.h>

//printing the byte size of the basic data types
int main()
{
    int a,b,c,d,e,f,g;
    a = sizeof(int);
    b = sizeof(char);
    c = sizeof(double);
    d = sizeof(float);
    e = sizeof(long);
    f = sizeof(long double);
    g = sizeof(long int);

    printf("data types size in bytes\n");
    printf("int size         :: %i\n", a);
    printf("char size        :: %i\n", b);
    printf("double size      :: %i\n", c);
    printf("float size       :: %i\n", d);
    printf("long size        :: %i\n", e);
    printf("long double size :: %i\n", f);
    printf("long int size    :: %i\n", g);

    return 0;
}
