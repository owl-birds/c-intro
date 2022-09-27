#include <stdio.h>

int main()
{
    unsigned int a = 24; // 0001 1000
    unsigned int b = 12; // 0000 1100
    int result = 0;
// << >> & |
    result = a >> 2;
    // 0000 0110
    printf("result:: %d", result);

    return 0;
}
