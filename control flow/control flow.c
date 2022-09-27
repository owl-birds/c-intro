#include <stdio.h>

int main()
{
    int score;
    int limit;
    limit = 70;

    printf("Enter your score:: ");
    scanf("%i", &score);

    if (score >= limit)
    {
        printf("You passed");
    }
    else if (score < limit)
    {
        printf("You were not passed");
    }

    return 0;
}
