#include <stdio.h>
#include <stdlib.h>

void point10(int **pnum);

int main()
{
    int num;
    // pointer need to be iniliazied first before
    // pointing into somethnig
    int *pnum = NULL;
    int *pnum2 = 0;
    pnum = &num;

    num = 100;
    printf("num before::%i\n", num);
    point10(&pnum);
    *pnum += 200;
    point10(&pnum);
    printf("num after::%i\n", num);

    //scnaf using pointer
    printf("enter num:: ");
    scanf("%i", pnum);
    printf("num scanf::%i\n", num);

    printf("%i\n", pnum2 == NULL);
    return 0;
}

void point10(int **pnum)
{
    **pnum = 2000;
}
