#include <stdio.h>

int main()
{
    char name[10];
    double age;

    //insert data
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%lf", &age);
    //displaying data
    printf("\nname: %s", name);
    printf("\nage : %lf", age);

    return 0;
}
