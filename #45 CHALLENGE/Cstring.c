#include <stdio.h>
#include <string.h>

int stringcount(char str[]);
void reverse(char str[]);
void reverse02(char str[]);


int main()
{
    char name[20] = "arif ikhwan";
    printf("%i\n", stringcount(name));
    reverse(name);
    char name2[20] = "london";
    reverse(name2);

    printf("Enter your name:: ");
    //scanf("%[^\n]s", name);
    gets(name);
    printf("\n---------\n");
    reverse02(name);

    printf("\n---------\n");
    // strcmp return 0 if two str are equal
    printf("comparing 2 str if == 0 than equal::%i\n", strcmp(name, name2));
    return 0;
}

int stringcount(char str[])
{
    int res = 0;
    for (int i = 0; str[i] != '\0'; i += 1)
        res += 1;
    return res;
}

void reverse(char str[])
{
    int i = stringcount(str);
    char res[i+2];
    for (int j = 0; i != 0; j += 1)
    {
        //printf("\n%i", j);
        res[j] = str[i-1];
        i -= 1;
    }
    //printf("\n\n%i\n\n", stringcount(res));
    //printf("\nreversed string :: %s\n", res);
    for (int j = 0; j < stringcount(str); j += 1)
      {printf("%c", res[j]);}
    printf("\n");
}

void reverse02(char str[])
{
    int i = stringcount(str) - 1;
    for (; i > -1; i -= 1)
        printf("%c", str[i]);
}
