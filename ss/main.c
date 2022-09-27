#include <stdio.h>

void mintypesorting(int a[], int n);
void change(int *a, int *b);
int minN(int a[], int n);

int main()
{

    return 0;
}

void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int minN(int a[], int n)
{
    static int i = 0;
    int res = a[0];
    while (i < n)
    {
        res > a[i];
        res = a[i];
        i += 1;
    }

}

void mintypesorting(int a[], int n)
{

}
