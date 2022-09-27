#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    int count = 0;
    char let;

    fp = fopen("countline.txt", "r");

    if (fp == NULL){
        perror("ERROR NOT EXIST");
        return -1;
    }

    while ((let = fgetc(fp)) != EOF)
    {
        if (let == '\n')
            count += 1;
        printf("%c", let);
    }
    count += 1;

    fclose(fp);
    fp = NULL;

    printf("\nlines::%i\n", count);

    return 0;
}
