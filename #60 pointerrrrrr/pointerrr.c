#include <stdio.h>
#include <stdlib.h>

void Cstring(char *Estring, char *string);
void Add2string(char *to, char *from);
void printS_Uptr(char *string);

int main()
{
    char name[] = "Arif Ikhwan Hendra";
    char copy[30];
    char greeting[50] = "Hello, good morning ";

    Cstring(copy, name);
    printf("%s\n", copy);

    Add2string(greeting, name);
    printf("%s\n", greeting);

    printS_Uptr(greeting);
    printf("\n");

    return 0;
}

void Cstring(char *Estring, char *string)
{
    for(;*string != '\0'; Estring++, string++)
        *Estring = *string;
    *Estring = '\0';
}

void Add2string(char *to, char *from)
{
    while (*to != '\0')
        to += 1;
    for (;*from != '\0'; from ++, to ++)
        *to = *from;
    *to = '\0';
}

void printS_Uptr(char *string)
{
    for (; *string != '\0'; string += 1)
        printf("%c", *string);
}
