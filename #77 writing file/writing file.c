#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int ch;

    // writing the file.txt and creating
    fp = fopen("newtext.txt", "w");

    for (ch = 33; ch <= 100; ch += 1)
        fputc(ch, fp);

    fclose(fp);
    fp = NULL;

    //////////////////////////////////////

    // reading the file.txt
    fp = fopen("newtext.txt", "r");
    int c;
    char str[100];

    if (fp == NULL){
        perror("ERROR OPENING FILE");
        return -1;
    }

    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    // returning the pointe to the starting point
    rewind(fp);

    fgets(str, 100, fp);
    printf("\n%s\n", str);

    fclose(fp);
    fp = NULL;

    return 0;
}
