#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//GLOBAL VAR


int natnum(int n);
int arth(int n);
int fibS(int n1, int n2);
void Parray(int arr[], int n);
int Ncount(int n);
int sumD(int n);
int GCD(int a, int b);
int LNarr(int arr[], int n);


int main()
{
    int n1 = 0, n2 = 1;
    int arr[5] = {1,2,3,4,5};
    natnum(1);
    printf("\n\n%i\n", arth(6));
    printf("1 "); fibS(n1, n2);
    printf("\n\n");
    Parray(arr, 5);
    printf("\n\n");
    printf("count:: %i", Ncount(19329));
    printf("\n\n");
    printf("%i", sumD(25555));
    printf("\n\n");
    printf(":: %i", GCD(20, 11));
    printf("\n\n");
    printf("::::a %i", LNarr(arr, 5));

    return 0;
}

int natnum(int n)
{
    if (n <= 50)
    {
        printf("%i ", n);
        natnum(n+1);
    }
}

int arth(int n)
{
   int res;
    if (n == 1)
        return 1;
    else
        res = n + arth(n-1);
}

int fibS(int n1, int n2)
{
    int lim, nextN;
    static int i = 1;
    lim = 11;
    if (i == lim)
        return 0;
    else
    {
        nextN = n1 + n2;
        n1 = n2;
        n2 = nextN;
        printf(" %i ", nextN);
        i += 1;
        fibS(n1, n2);
    }
    return 0;
}

void Parray(int arr[],int n)
{
    static int i;
    if (i == n)
        return 0;
    printf("%i ", arr[i]);
    i+=1;
    Parray(arr, n);
}

int Ncount(int n)
{
    static int res = 0;
    if (n != 0)
       {
        res += 1;
        n = n/10;
       }
    else if (n == 0)
        return 0;
    Ncount(n);
    return res;
}

int sumD(int n)
{
    static int res = 0;
    if (n == 0)
        return 0;
    else if (n > 10)
        {res = res + (n % 10);
        n /= 10;}
    else if (n <= 10)
        {res += n;
        n /= 10;}
    sumD(n);
    return res;
}

int GCD(int a, int b)
{
    int res;
    if (b == 0)
        return a;
    res = a % b;
    a = b;
    b = res;

    GCD(a, b);
}

int LNarr(int arr[], int n)
{
    static int i = 0;
    int res;
    if (i == 0)
        {res == arr[0];}
    if (i == n)
        {return res;}
    if (res < arr[i])
        {res = arr[i];}
    i += 1;
    printf("%i", i);
    LNarr(arr, n);
}
