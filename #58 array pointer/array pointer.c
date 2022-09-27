#include <stdio.h>
#include <stdlib.h>

// remember in c array are pointer

int sumArray(int arr[], int n);
int sumArray2(int *ptr, int n);


int main()
{
    int array[5] = {1,2,3,4,5};
    printf("%i\n", sumArray(array, 5));

    int *ptr = NULL;
    ptr = array;
    // incrementing through the array using pointer
    printf("%i\n", *ptr);
    ptr ++;
    printf("%i\n", *ptr);
    ptr += 1;
    printf("%i\n", *ptr);
    ptr += 1;
    printf("%i\n", *ptr);
    ptr += 1;
    printf("%i\n", *ptr);

    printf("4::%p\n", &array[4]);
    printf("3::%p\n", &array[3]);
    printf("2::%p\n", &array[2]);
    printf("1::%p\n", &array[1]);
    printf("0::%p\n", &array[0]);

    printf("%i\n", &array[2] < &array[3]);

    int *const arrayEnd = array + 5;
    printf("address of the arrayend::%p\n", arrayEnd);
    printf("address of array0::%p\n", &array);
    printf("---------\n");
    printf("the sum of array:: %i\n", sumArray2(array, 5));
    return 0;
}

int sumArray(int arr[], int n)
{
    int *Parr = arr;
    int res = 0;
    int *const arrayEnd = arr + n;
    for (;Parr < arrayEnd; Parr += 1)
    {
        res += *Parr;
    }
    return res;
}

int sumArray2(int *ptr, int n)
{
    int res = 0;
    int arrayEnd = ptr + n;
    for (;ptr < arrayEnd; ptr += 1)
        res += *ptr;
    return res;
}
