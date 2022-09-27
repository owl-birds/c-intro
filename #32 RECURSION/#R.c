#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//GLOBAL VARIABLE


int LNarr(int arr[], int n, int a);


int main()
{
    int arrN[5] = {1,2,99,4,5};
    int max = 0;
    printf("%i\n",LNarr(arrN, 5, max));

    return 0;
}



int LNarr(int arr[], int n, int a)
{
    static int i = 0;
    if (i == 0)
        a = arr[0];
    if (a < arr[i])
        a = arr[i];
    if (i == n)
        return a;
    i += 1;
    LNarr(arr, n, a);
}
