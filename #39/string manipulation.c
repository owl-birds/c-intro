#include <stdio.h>
#include <string.h>

void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    char name[] = " Arif Ikhwan Hendra";
    char e = 'e';
    char k = 'k';
    char *pointchar = NULL;
    char *pointchar2 = NULL;
    char fname[] = "Arif";
    char *pointstr = NULL;

    pointchar = strchr(name, e);
    printf("%c\n", *pointchar);

    pointstr = strstr(name, fname);
    printf("%c\n", *pointstr);

    pointchar2 = strchr(name, k);
    printf("%c\n", *pointchar2);
    //tokenizing

    char greet[100] = "Hello, good-morning";
    const char s[2] = " ";
    char *Ptok;


    //
    strncat(greet, name, sizeof(greet)-1);
    printf("\n\n\n%s\n\n\n", greet);
    //

    Ptok = strtok(greet, s);
    //printf("\n\n%c\n\n", *Ptok);

    while (Ptok != NULL)
    {
        printf("\n%s\n", Ptok);
        Ptok = strtok(NULL, s);
    }

    char A = 'A';
    printf("\n%i\n", isupper(A));

    printf("\n\n\n\n\n-----------------\n");
    //converting string upper or lower case

    char name1[40] = "Arif";
    printf("\nbefore:: %s\n", name1);
    for(int i = 0 ; (name1[i] = (char)toupper(name1[i])) != '\0' ; i++);
    printf("after:: %s", name1);
    printf("\n\n\n");
    char name2[40];
    printf("Enter your name(all upper case):: ");
    scanf("%[^\n]s", name2);
    int i = 0;
    while ((name2[i] != '\0'))
    {
        name2[i] = (char)tolower(name2[i]);
        i+=1;
    }
    printf("\n\nname2 in lower case:: %s", name2);
    char combnname[100];
    strncat(combnname, name1, sizeof(name1)-1);
    strncat(combnname, name2, sizeof(name2)-1);
    printf("\n\ncombn 2 name:: %s", combnname);

    printf("\n-----------\n");
    int a = 100;
    int *pa;
    int b = 200;
    int *pb;
    pa = &a;
    pb = &b;

    printf("\nbefore a::%i, b::%i\n", a, b);
    change(pa,pb);
    printf("\nafter a::%i, b::%i\n", a, b);

    return 0;
}

