#include <stdio.h>
#include <string.h>

int main()
{
    char greet[50], name[50], copied[50];
    char A = 'A', B = 'B';

    strcpy(greet, " good morning ");
    strcpy(name, " Arif Ikhwan Hendra");

    strncat(greet, name, 20);
    strncpy(copied, name, sizeof(copied)-1);

    printf("%s\n", greet);
    printf("copied version:: %s\n", copied);

    printf("A compare B:: %i\n", strcmp("A", "B"));
    printf("B compare A:: %i\n", strcmp("B", "A"));
    printf("a compare A:: %i\n", strcmp("a", "A"));
    printf("A compare a:: %i\n", strcmp("A", "a"));
    printf("a compare b:: %i\n", strcmp("a", "b"));
    printf("b compare a:: %i\n", strcmp("b", "a"));
    printf("word compare word:: %i\n", strcmp("word", "word"));
    printf("%i\n", A);
    printf("%i\n", B);
    if (strncmp("arif ikh", "arif ", 5) == 0)
        printf("your name arif");
    if (strncmp("ikhwan", "arif", 4) == 0)
        printf("NOT GOOD");
    printf("\nmy name length:: %i\n\n\n", strlen("arif ikhwan hendra"));

    strncat(name, greet, 15);
    printf("%s\n", name);
    return 0;
}
