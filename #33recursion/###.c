#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Cstring(char s[]);
void reverseS(char s[], int n);

int main()
{
    char name[4];

    Cstring(name);
    printf("%s", name);
    printf("\n\n");
    reverseS(name, 4);

    return 0;
}

void Cstring(char s[])
{
    printf("Enter your full name:: ");
    scanf("%[^\n]s", s);
}

void reverseS(char s[], int n)
{
    if (n == -1)
        return;
    printf("%c", s[n]);
    reverseS(s, (n-1));
}
