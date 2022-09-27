#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char greet[100] = "Hello, Good morning";
    char name[30]  = " Arif Ikhwan Hendra";

    strncat(greet, name, sizeof(name) - 1);
    printf("%s\n", greet);

    printf("%i\n", strncmp("Arif Ikhwan Hendra", "Arif Ikhwan Hendra", sizeof(name)));

    char *cp = strstr(name, "Ikhwan");
    printf("%c\n", *cp);
    cp += 1;
    printf("%c\n", *cp);


    printf("%i\n", rand());
    printf("%i\n", rand());
    printf("%i\n", rand());
    printf("%i\n", rand());
    printf("%i\n", rand());
    printf("%i\n", rand());

    return 0;
}
