#include <stdio.h>
//#3exercising
int main()
{
    char str[100];
    int i;

    //storing a data into a variable
    printf("Enter a value :");
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d::::%s\n", i, str);

    return 0;
}
