#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string = NULL;
    string = malloc(25*sizeof(char));
    printf("Enter your name:: ");;
    scanf("%[^\n]s", string);
    printf("name :: %s\n", string);
    free(string);
    return 0;
}
