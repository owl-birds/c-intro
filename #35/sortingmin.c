#include <stdio.h>

void mintypesorting(int a[], int n);
void change(int *a, int *b);
int minN(int a[], int n, int i);

int main()
{
    int Ln[5] = {12,4,5,23,1};
    printf("%i", minN(Ln, 5, 0));
    printf("\n\n");
    mintypesorting(Ln, 5);
    for (int i = 0; i < 5; i+=1)
        printf("%i ", Ln[i]);
    return 0;
}

void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int minN(int a[], int n, int i)
{
    int res = a[i];
    int idxres = i;
    while (i < n)
    {
        if (res > a[i])
          {
              idxres = i;
              res = a[i];
          }
        i += 1;
    }
    return idxres;
}

void mintypesorting(int a[], int n)
{
    for (int i = 0;i < n; i+=1)
    {
        change(&a[i], &a[minN(a,n,i)]);
    }
}

