#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[] = "Arif Ikhwan Hendra";
    char *cPtr = name;

    for (int i = 0; i < strlen(name); i ++, cPtr ++)
        printf("address[%i] :: %p char[%i] :: %c\n", i, cPtr, i, *cPtr);

    printf("---------\n");
    cPtr = name;
    for (int i = 0; i < strlen(name); i ++)
        printf("address[%i]::%p char[%i]::%c\n", i,cPtr + i,i,*(cPtr + i));

    return 0;
}
