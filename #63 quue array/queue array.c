#include <stdio.h>
#include <stdlib.h>

void enqueue(int queue[], int *front, int *rear, int data, int n);
void dequeue(int queue[], int *front, int *rear, int n);

int main()
{
    int queue[5];
    int front, rear;
    front = -1;
    rear  = -1;
    enqueue(queue, &front, &rear, 100, 5);
    enqueue(queue, &front, &rear, 200, 5);
    enqueue(queue, &front, &rear, 300, 5);
    enqueue(queue, &front, &rear, 400, 5);
    enqueue(queue, &front, &rear, 500, 5);

    dequeue(queue, &front, &rear, 5);
    dequeue(queue, &front, &rear, 5);
    //dequeue(queue, &front, &rear, 5);
    //dequeue(queue, &front, &rear, 5);

    printf("front::%i,rear::%i\n", queue[front], queue[rear]);

    return 0;
}

void enqueue(int queue[], int *front, int *rear, int data, int n)
{
    if (*rear == n-1)
        printf("queue full\n");
    else if (*front == -1)
    {
        *front += 1;
        *rear  += 1;
        queue[*front] = data;
    }
    else
    {
        *rear += 1;;
        queue[*rear] = data;;
    }
}

void dequeue(int queue[], int *front, int *rear, int n)
{
    printf("deleted:: %i\n", queue[*front]);
    for (int i = 0; i < n; i ++)
        queue[i] = queue[i + 1];
    *rear -= 1;
}
