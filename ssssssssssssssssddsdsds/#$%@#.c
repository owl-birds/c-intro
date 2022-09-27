#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10], birthplace[10];
    int age;

    printf("Enter your name:: ");
    scanf("%s", name);
    printf("Enter Your Birth place:: ");
    scanf("%s", birthplace);
    printf("Enter your age:: ");
    scanf("%i", &age);

    printf("\n\nYour data \n\n");
    printf("my name:: %s", name);
    printf("\nmy birth place:: %s", birthplace);
    printf("\nmy age:: %i", age);

    return 0;
}
