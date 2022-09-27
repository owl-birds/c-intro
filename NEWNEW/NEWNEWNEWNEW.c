#include <stdio.h>
#include <stdlib.h>

int main()
{
    double length1, width1;
    double area = 0.0;

    printf("Enter the length:: ");
    scanf("%lf", &length1);
    printf("Enter the width:: ");
    scanf("%lf", &width1);
    area = length1 * width1;
    printf("the area:: %lf", area);

    return 0;
}
