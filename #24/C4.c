#include <stdio.h>
#include <stdbool.h>
//challenge Greatest common divisor

int gcd(int x, int y);
float AValue(float x);
//float sqroot(float x);

int main()
{
    int a = 24;
    int b = 77;
    float c = 400;
    float f1 = -29.54;
    int res = gcd(a, b);


    printf("%i", res);
    printf("\n%.2lf", AValue(f1));
    //printf("\n%i", sqroot(c));
    return 0;
}

int gcd(int x, int y)
{
    int temp;

    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;

}

float AValue(float x)
{
    if (x < 0)
        x = -x;
    return x;
}

//float sqroot(float x)
//{
//
//}
