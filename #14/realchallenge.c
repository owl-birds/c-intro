#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randomnum = rand() % 10;

    int tries, limit;
    int guesses;
    tries = 0;
    limit = 3;

    while (tries < limit)
    {
        printf("Enter your guess:: ");
        scanf("%i", &guesses);
        if (guesses == randomnum)
        {
            printf("win!");
            break;
        }
        tries += 1;
    }
    if (tries == limit)
    {
        printf("you lose!");
    }
    printf("\nThe right answer:: %i", randomnum);
    return 0;
}
