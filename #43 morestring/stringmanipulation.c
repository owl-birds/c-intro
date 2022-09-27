#include <stdio.h>
#include <string.h>


int stringcount(char string[]);
int compare2string(char string1[], char string2[]);
void add2string(char result[], const char str1[], const char str2[]);


int main()
{
    char res[40];
    char greeting[10] = "Good morning";
    char name[20]  = "Arif Ikhwan Hendra";
    char name2[20] = "Arif Ikhwan Hendra";
    char name3[10] = "DPRD";
    char name4[10] = "MPR";
    printf("string name length:: %i\n", stringcount(name));
    printf("is name2 == name:: %i", compare2string(name2, name));
    printf("\nis name == name2:: %i\n", compare2string(name, name2));
    printf("\n\nname3 == name4 ::%i\n", compare2string(name3,name4));

    printf("\n\n");
    add2string(res, greeting, name);
    printf("%s\n", res);

    return 0;
}

int stringcount(char string[])
{
    int count = 0;
    while (string[count] != '\0')
        count += 1;
    return count;
}

int compare2string(char string1[], char string2[])
{
    int c = 1;
    int i = 0;
    while (string1[i] != '\0')
    {
        if (string1[i] == string2[i])
            {c += 1;}
        i += 1;
    }
    c -= 1;
    //printf("\nc %i,i %i\n", c,i);
    //printf("\nss%i\n\n", stringcount(string2));
    if (c == stringcount(string2))
        {return 1;}
    else
        {return 0;}
}



