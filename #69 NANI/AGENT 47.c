#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    void *vptr = NULL;
    int num = 999;
    vptr = &num;
    printf("num::%d\n", *(int*)vptr);

    int *pnum = malloc(sizeof(int));
    // if the program cant allocated the memory malloc will return NULL
    if(pnum == NULL)
    // same as if (!pnum)
        printf("---------\n");

    // CALLOC   ex int *pnum = calloc(75, sizeof(int));
    // realloc  ex pnum = realloc(pnum, 25); reallocatinig memory

    char *str = NULL;
    str = (char*)malloc(15 * sizeof(char));
    strcpy(str, "Arif");
    printf("string::%s Address::%p\n", str, str);
    //printf("size::%i\n", sizeof(str));

    str = (char*)realloc(str, 25 * sizeof(char));
    strcat(str, " ikhwan");
    printf("string::%s Address::%p\n", str, str);
    //printf("size::%i\n", sizeof(str));


    free(str);

    return 0;
}
