#include <stdio.h>

void add2string(char result[], const char str1[], const char str2[]);
void add2string2(char str[], const char str1[]);
int stringcount(char str[]);

int main()
{
    char res[40];
    char greet[45] = "Good morning";
    char name[15] = " Arif ikhwan!";

    add2string(res, greet, name);
    printf("\n%s\n", res);
    add2string2(greet, name);
    //greet[13] = 'd';
    //greet[14] = 'o';
    //greet[15] = 'd';
    //greet[16] = 'o';
    //greet[17] = 'l';

    for (int i = 0; i != stringcount(greet); i += 1)
        printf("%c", greet[i]);

    //printf("\nss%c", greet[12]);

    return 0;
}

void add2string(char result[], const char str1[], const char str2[])
{
    int i,j;
    for (i = 0; str1[i] != '\0'; i += 1)
        {result[i] = str1[i];}
    for (j = 0; str2[j] != '\0'; j += 1)
        {result[j + i] = str2[j];}
    result[i+j] = '\0';
}

void add2string2(char str[], const char str1[])
{
    int i,j;
    i = 0;
    while (str[i] != '\0')
        {i += 1;}
    //i += 1;
    j = 0;
    while (str1[j] != '\0')
    {
        str[i] = str1[j];
        j += 1;
        i += 1;
        //printf("i%i\n", i);
        //printf("%c", str1[j]);
    }
    //printf("i%i\n", i);
}

int stringcount(char str[])
{
    int i, c = 0;
    i = 0;
    while (str[i] != '\0')
        {
          c += 1;
          i += 1;
        }
    return c;
}
