#include <stdio.h>

//weekly pay
int main()
{
    double  tax, res;
    int time;

    printf("Enter how many hours:: ");
    scanf("%i", &time);
    if (time <= 40)
    {
        res = time * 12;
    }
    else if (time > 40)
    {
        res = (40 * 12) + ((time - 40) * 18);
    }

    printf("your payment withput taxes:: %.2lf dollars", res);

    //taxes
    if (res <= 450)
    {
        if (res <= 300)
        {
            tax = 0.15 * res;
        }
        else
        {
            tax = (0.15 * 300) + (0.20 * 150);
        }
    }
    else if (res > 450)
    {
        tax = (0.15 * 300) + (0.20 * 150) + (0.25 * (res - 450));
    }

    res = res - tax;
    printf("\nyour payment with taxes:: %.2lf dollars", res);

    return 0;
}
