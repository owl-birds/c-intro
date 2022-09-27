#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    char str[60];

    fp = fopen("nani.txt", "r");

    if(fp == NULL){
        perror("Error opening file");
        return(-1);
    }

    // reading a line at a time
    if (fgets(str, 60, fp) != NULL){
        printf("%s", str);
    }
    if (fgets(str, 60, fp) != NULL){
        printf("%s\n", str);
    }

    fclose(fp);
    fp = NULL;


    return 0;
}
