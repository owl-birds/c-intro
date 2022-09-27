#include <stdio.h>
#include <stdbool.h>

int check(unsigned int a)
{
    bool b = true, c = false;
    if (a % 3 == 0 || a % 7 == 0)
        return b;
    else
        return c;
}

int main()
{
    int x = 7;
    int b;
    b = check(x);
    printf("%i", b);


    return 0;
}
