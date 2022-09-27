#include <stdio.h>
#include <stdlib.h>

#define max 8
// heap using array

void change(int *num1, int *num2);
int parent(int loc);
int Rchild(int loc);
int Lchild(int loc);
void insertheap(int heap[], int *heapsize, int data);
int deleteHeap(int heap[], int *heapsize);

int main()
{

    printf("parent:  %i\n", 1);
    printf("left child: %i\n", Lchild(1));
    printf("rigth child: %i\n", Rchild(1));

    printf("___________\n");

    int heap1[max];
    int heapsize1 = 0;
    insertheap(heap1, &heapsize1, 100);
    insertheap(heap1, &heapsize1, 200);
    insertheap(heap1, &heapsize1, 150);
    insertheap(heap1, &heapsize1, 250);
    insertheap(heap1, &heapsize1, 350);
    insertheap(heap1, &heapsize1, 450);
    insertheap(heap1, &heapsize1, 650);

    for (int i = 0; i <= heapsize1; i += 1)
        printf("%i ", heap1[i]);
    printf("\n\n");

    printf("\ndeleted:: %i\n", deleteHeap(heap1, &heapsize1));
    //printf("\ndeleted:: %i\n", deleteHeap(heap1, &heapsize1));

    for (int i = 0; i <= heapsize1; i += 1)
        printf("%i ", heap1[i]);
    printf("\n\n");

    printf("\ndeleted:: %i\n", deleteHeap(heap1, &heapsize1));
    for (int i = 0; i <= heapsize1; i += 1)
        printf("%i ", heap1[i]);
    printf("\n\n");

    printf("\ndeleted:: %i\n", deleteHeap(heap1, &heapsize1));
    for (int i = 0; i <= heapsize1; i += 1)
        printf("%i ", heap1[i]);
    printf("\n\n");

     printf("\ndeleted:: %i\n", deleteHeap(heap1, &heapsize1));
    for (int i = 0; i <= heapsize1; i += 1)
        printf("%i ", heap1[i]);
    printf("\n\n");

     printf("\ndeleted:: %i\n", deleteHeap(heap1, &heapsize1));
    for (int i = 0; i <= heapsize1; i += 1)
        printf("%i ", heap1[i]);
    printf("\n\n");



    return 0;
}

void change(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int parent(int loc)
{
    return loc / 2;
}
int Rchild(int loc)
{
    return loc * 2 + 1;
}
int Lchild(int loc)
{
    return loc * 2;
}

void insertheap(int heap[], int *heapsize, int data)
{
    if (*heapsize == max)
    {
        printf("FULL");
        return;
    }
    else if (*heapsize == 0)
    {
        *heapsize += 1;
        heap[*heapsize] = data;
        return;
    }
    else
    {
        *heapsize += 1;
        int i = *heapsize;
        heap[*heapsize] = data;
        while (heap[i] > heap[parent(i)] && i != 1)
        {
            change(&heap[i], &heap[parent(i)]);
            i = parent(i);
        }
        return;
    }
}

int deleteHeap(int heap[], int *heapsize)
{
    if (*heapsize == 0)
        return 0;
    int temp = heap[1];
    int n = 1;
    heap[n] = heap[*heapsize];
    *heapsize -= 1;
    while ((heap[n] < heap[Lchild(n)]) || (heap[n] < heap[Rchild(n)]))
    {
        if ((Rchild(n) == *heapsize+1) || (Lchild(n) == *heapsize+1))
            break;
        else if (heap[n] < heap[Lchild(n)] && heap[Lchild(n)] > heap[Rchild(n)])
        {
            change(&heap[n], &heap[Lchild(n)]);
            n = Lchild(n);
        }
        else
        {
            change(&heap[n], &heap[Rchild(n)]);
            n = Rchild(n);
        }
    }
    return temp;
}

