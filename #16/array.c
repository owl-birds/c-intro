#include <stdio.h>
#include <stdlib.h>

int sum(int x[], int n)
{
    int res;
    res = 0;
    for (int i = 0; i < n; i+=1)
    {
        res += x[i];
    }
    return res;
}
int mean(int sum, int n)
{
    int mean1;
    mean1 = (double)sum/n;
    return mean1;
}

int main()
{
    int n;
    int  i, total;
    double rata;

    printf("Enter the size of the array:: ");
    scanf("%i", &n);
    int score[n];


    for (i = 0; i < n; i += 1)
    {
        printf("score %i ::", i+1);
        scanf("%i", &score[i]);
    }
    total = sum(score, n);
    printf("%i", total);
    rata = mean(total, n);
    printf("\nrata rata score:: %lf", rata);
    return 0;
}
