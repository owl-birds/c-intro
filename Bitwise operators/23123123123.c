#include <stdio.h>
#include <stdlib.h>


// 4 byte  in bits == 0000 0000 0000 0000 0000 0000 0000 0000
int main()
{
    unsigned int num1 = 24; // 0001 1000
    unsigned int num2 = 12; // 0000 1100
    int result1 = 0;

    //shifting << >>

    result1 = num1 >> 2;
    // 0000 0110
    printf("result::: %d", result1);

    return 0;
}
