#include <stdio.h>

// conversing minutes into days and years

int main()
{
    double minute,day,year;

    printf("Enter minutes:: ");
    scanf("%lf", &minute);

    day = minute / (24 * 60);
    year = minute / ((365 * 24)*60);

    printf("%lf in minutes equals to %lf in days and equals to %lf in years", minute,day,year);

    return 0;
}
