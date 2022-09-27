#include <stdio.h>
#include <stdlib.h>

//queue data structures

typedef struct queue{
    int score;
    struct queue *rear;
}Queue;

void enqueue(Queue **front, int score);
int dequeue(Queue **front);
int front(Queue *front);
int rear(Queue *front);
int isempty(Queue *front);
int isfull(Queue *front);

int main()
{
    Queue *front1 = NULL;
    enqueue(&front1, 100);
    enqueue(&front1, 200);
    enqueue(&front1, 300);
    enqueue(&front1, 400);
    enqueue(&front1, 500);
    printf("deq1::%i\n", dequeue(&front1));
    printf("deq2::%i\n", dequeue(&front1));
    printf("deq3::%i\n", dequeue(&front1));
    printf("----------\n");
    printf("front queue:: %i\n", front(front1));
    printf("rear  queue:: %i\n", rear(front1));
    printf("first::%i\n", front1->score);
    printf("----\nis queue full :: %i\n", isfull(front1));
    printf("----\nis queue empty:: %i\n", isempty(front1));
    return 0;
}

int isempty(Queue *front)
{
    if (front == NULL)
        return 1;
    else
        return 0;
}

int isfull(Queue *front)
{
    int i = 1;
    while (front->rear != NULL)
        {
            i += 1;
            front = front->rear;
        }
    if (i == 5)
        return 1;
    else
        return 0;
}

void enqueue(Queue **front, int score)
{
    Queue *temp = *front;
    Queue *newqueue = malloc(sizeof(Queue));
    newqueue->score = score;
    newqueue->rear = NULL;
    if (isempty(temp) == 1)
        *front = newqueue;
    else
    {
        while(temp->rear != NULL)
            temp = temp->rear;
        temp->rear = newqueue;
    }
}

int dequeue(Queue **front)
{
    if (isempty(*front) == 1)
        return 0;
    else
    {
        Queue *temp = *front;
        *front = temp->rear;
        int deq = temp->score;
        free(temp);
        return deq;
    }
}

int front(Queue *front)
{
    if (isempty(front) == 1)
        return 0;
    else
    {
        return front->score;
    }
}

int rear(Queue *front)
{
    if (isempty(front) == 1)
        return 0;
    else
    {
        while (front->rear != NULL)
            front = front->rear;
        return front->score;
    }
}
