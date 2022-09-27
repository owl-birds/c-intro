#include <stdio.h>
#include <stdlib.h>

//pointers to array, increementing pointer in array

int main()
{
    int arr[100]; // all in this array are pointers
    int *valuesPtr;

    arr[0] = 1000;
    arr[1] = 2000;
    arr[2] = 3000;

    valuesPtr = arr;
    printf("arr 0::%i\n", *valuesPtr);
    printf("address arr0:: %p address ptr point to:: %p\n", arr[0], *valuesPtr);
    valuesPtr ++;  // increement in array using pointer
    printf("arr 1::%i\n", *valuesPtr);
    printf("address arr1:: %p address ptr point to:: %p\n", arr[1], *valuesPtr);
    valuesPtr ++; // increement in array using pointer
    printf("arr 2::%i\n", *valuesPtr);
    printf("address arr2:: %p address ptr point to:: %p\n", arr[2], *valuesPtr);

    return 0;
}
