#include <stdio.h>

void view(int a)
{
    printf("%i", a);
}

int main()
{
    int age[3] = {12,35,23};
    for (int i = 0; i < 3; i++)
        printf("%i\n", age[i]);

    view(1000000);
    return 0;
}
