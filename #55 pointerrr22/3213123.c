#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 2002;
    // *pointer cant change anny value if using const
    const int *pnum = &num;
    // pointer address cnat change
    int *const pnum2 = &num;
    int num2 = 99;
    // cannt do anythinh too pnum3
    const int *const pnum3 = &num;

    num = 2001;

    printf("%i\n", *pnum);

    //pnum2 = &num2; it will resut in error


    return 0;
}
