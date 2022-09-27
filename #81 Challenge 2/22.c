#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char letter;

    fp1 = fopen("upper.txt", "r");
    fp2 = fopen("newupper.txt", "w");

    if (fp1 == NULL || fp2 == NULL){
        perror("ERROR");
        return -1;
    }

    while ((letter = fgetc(fp1)) != EOF)
    {
        if (isupper(letter) == 0)
        {
           letter = toupper(letter);
        }
        fputc(letter, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    remove("upper.txt");
    rename("newupper.txt", "upper.txt");


    return 0;
}
