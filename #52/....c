#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a,b;
    int *pa;
    int *ppa;
    pa = &a;
    ppa = pa;
    a = 200;
    printf("%i\n", a);
    *pa = 400;
    printf("%i\n", a);
    *ppa = 800;
    printf("%i\n", a);

    printf("%p\n", pa);
    printf("%p\n", &a);
    // pointer address
    printf("pointer pa address :: %p\n", (void*)&pa);
    printf("pointer ppa address:: %p\n", (void*)&ppa);
    printf("pointer ppa size   :: %d bytes\n", sizeof(ppa));
    printf("int a size         :: %d bytes\n", sizeof(a));

    b = *pa;
    printf("b:: %i\n", b);
    return 0;
}
