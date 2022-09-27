#include <stdio.h>
#include <stdlib.h>

//remember that array is a poniter in c

int stringlen(char *string);
int stringlen2(const char *string);

int main()
{
    char name[] = "Arif Ikhwan Hendra";
    char greet[] = "Hello. good morning";
    printf("string length    :: %i\n", stringlen(name));
    printf("string length    :: %i\n", stringlen(greet));
    printf("string length 2.0:: %i\n", stringlen(greet));


    return 0;
}

int stringlen(char *string)
{
    int res = 0;
    for(;*string != '\0'; string++)
        res += 1;
    return res;
}

int stringlen2(const char *string)
{
    const char *lastAdd = string;
    while(*lastAdd != '\0')
        lastAdd ++;
    return lastAdd - string;
    // substracting the lengt in array by minusing the last
    // address to the first address
}
