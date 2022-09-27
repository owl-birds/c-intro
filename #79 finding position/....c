#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int len;
    int len2;

    fp = fopen("new.txt", "w");
    if (fp == NULL){
        perror("ERROR");
        return -1;
    }

    fputs("Arif Ikhwan Hendra, Hello.\n", fp);
    fclose(fp);
    fp = NULL;

    fpos_t position;

    fp = fopen("new.txt", "r");
    if (fp == NULL){
        perror("ERROR");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    //rewind(fp);
    len = ftell(fp);

    //rewind(fp);
    fseek(fp, 0, SEEK_SET); // back too the start
    fgetpos(fp, &position);

    len2 = ftell(fp); // tellling where the pointer is

    fclose(fp);
    fp = NULL;

    printf("position :: %i\n", len);
    printf("position2:: %i\n", len2);


    return 0;
}
