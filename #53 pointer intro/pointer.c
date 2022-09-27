#include <stdio.h>
#include <stdlib.h>

// pointer basic

int main()
{
    int num = 1000;
    int *pnum = NULL;
    pnum = &num;
    printf("pointer address       :: %p\n", &pnum);
    printf("pnum point at address :: %p\n", &(*pnum));
    printf("num address           :: %p\n", &num);
    printf("the value that pnum pinted :: %i\n", *pnum);
    printf("num value                  :: %i\n", num);
    printf("value of pnum :: %p\n", pnum);
    return 0;
}
