#include <stdio.h>

// writing string in file

int main()

{
    FILE *fp = NULL;
    char firstline[50];
    char secondline[50];
    char thirdline[50];

    fp = fopen("Wtext.txt", "w");

    if (fp == NULL){
        perror("ERROR IN OPENING FILE OR CREATING FILE");
        return -1;
    }

    fputs("Hello, my name is Arif Ikhwan Hendra.\n",fp);
    fputs("im 19 years old.\n",fp);
    fputs("currently im a college student at STIS.\n",fp);
    fprintf(fp, "%d %c %d = %d", 2, '+', 2, 4);

    fclose(fp);
    fp = NULL;

    fp = fopen("Wtext.txt", "r");
    if (fp == NULL){
        perror("ERROR IN OPENING FILE OR CREATING FILE");
        return -1;
    }
    fgets(firstline, 50, fp);
    printf("first line  :: %s", firstline);
    fgets(secondline, 50, fp);
    printf("second line :: %s", secondline);
    fgets(thirdline, 50, fp);
    printf("thirdline   :: %s\n", thirdline);
    fclose(fp);
    fp = NULL;

    return 0;
}
