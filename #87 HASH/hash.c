#include <stdio.h>
#include <stdlib.h>
#define first 0
#define second 1


int hashF(int key, int n);
void insertD(int datas[], int data, int max);
void initArr(int datas[], int n);
void delD(int datas[], int del, int n);
int search(int datas[], int data, int n);

int main()
{
    int scores[10];
    initArr(scores, 10);

    for (int i = 0; i < 10; i += 1)
        printf("%i ", scores[i]);
    printf("\n");

    insertD(scores, 2000, 10);
    for (int i = 0; i < 10; i += 1)
        printf("%i ", scores[i]);
    printf("\n");

    insertD(scores, 3000, 10);
    for (int i = 0; i < 10; i += 1)
        printf("%i ", scores[i]);
    printf("\n");

    delD(scores, 3000, 10);

    insertD(scores, 9023, 10);
    for (int i = 0; i < 10; i += 1)
        printf("%i ", scores[i]);
    printf("\n");

    insertD(scores, 3000, 10);
    for (int i = 0; i < 10; i += 1)
        printf("%i ", scores[i]);
    printf("\n");

    printf("idx of 9023 :: %i\n", search(scores, 9023, 10));

    return 0;
}

int hashF(int key, int n)
{
    return key % n;
}

void initArr(int datas[], int n)
{
    for (int i = 0; i < n; i += 1)
        datas[i] = first;
}

void insertD(int datas[], int data, int max)
{
    int idx = hashF(data, max);
    while (datas[idx] != first && datas[idx] != second)
        idx += 1;
    datas[idx] = data;
}

void delD(int datas[], int del, int n)
{
    int idx = hashF(del, n);
    while (datas[idx] != del)
    {
      if (datas[idx] == first || datas[idx] == second)
         {
            printf("datas not exist");
            return;
        }
      idx += 1;
    }
    datas[idx] = second;
    return;
}

int search(int datas[], int data, int n)
{
    int idx = hashF(data, n);
    while (datas[idx] != data)
    {
        if (datas[idx] == first || datas[idx] == second)
        {
            return -1;
        }
        idx += 1;
    }
    return idx;
}

