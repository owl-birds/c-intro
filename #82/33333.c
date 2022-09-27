#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("new.txt", "w");
    if(fp == NULL){
        perror("ERROR");
        return -1;
    }
    fputs("My name is Arif Ikhwan Hendra\n", fp);
    fputs("im 19 years old", fp);

    fclose(fp);
    fp = NULL;

    fp = fopen("new.txt", "r");
    if(fp == NULL){
        perror("ERROR");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    int cur = ftell(fp); //getting the position of the pointer
    printf("%i\n", cur);

    for (int i = 1; i <= cur; i ++)
    {
        fseek(fp, -i, SEEK_END); // getting back to the start
        printf("%c", fgetc(fp));
    }

    fclose(fp);
    fp = NULL;

    printf("\n");

    return 0;
}
