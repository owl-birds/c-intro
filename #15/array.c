#include <stdio.h>
#include <stdlib.h>


int main()
{
    int score[5];
    int i;

    for (i=0; i < 5; i+=1)
    {
        printf("score %i :: ", i+1);
        scanf("%i", &score[i]);
    }
    for (i=0; i < 5; i+=1)
    {
        printf("\n%i", score[i]);
    }
    return 0;
}
