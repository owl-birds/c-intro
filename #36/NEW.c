#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Arif Ikhwan Hendra\0";
    char temp[50];
    //char scopy[18] = strncpy(name);
    printf("%i \n", strlen(name));
    printf("%s", name);
    printf("\n\n");
    printf("ENTER YOUR NAME:: ");
    scanf("%[^\n]s", name);
    printf("%s", name);
    printf("\n");
    //copying string
    strncpy(temp, name, sizeof(temp) - 1);
    printf("copied::%s\n", temp);
    printf("%i\n", sizeof(temp));
    printf("concatenate:: %s", strcat(name, temp));

    printf("\nconcatenate::: 2 %s", strncat(name, temp, 3));


    return 0;
}
