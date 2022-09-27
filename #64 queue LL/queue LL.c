#include <stdio.h>
#include <stdlib.h>

typedef struct queue{
    int data;
    struct queue *next;
}Queue;

void enqueue(Queue **front, Queue **rear, int data);
void dequeue(Queue **front, Queue **rear);

int main()
{
    Queue *front1 = NULL;
    Queue *rear1  = NULL;

    enqueue(&front1, &rear1, 100);
    enqueue(&front1, &rear1, 200);
    enqueue(&front1, &rear1, 300);
    dequeue(&front1, &rear1);
    dequeue(&front1, &rear1);
    dequeue(&front1, &rear1);
    dequeue(&front1, &rear1);
    //printf("%i,%i\n", front1->data, rear1->data);

    return 0;
}

void enqueue(Queue **front, Queue **rear, int data)
{
    Queue *newqueue = malloc(sizeof(Queue));
    Queue *temp = *rear;
    newqueue->data = data;
    newqueue->next = NULL;
    if (*front == NULL)
    {
        *front = newqueue;
        *rear  = newqueue;
    }
    else
    {
        temp->next = newqueue;
        *rear = newqueue;
    }
}

void dequeue(Queue **front, Queue **rear)
{
    Queue *temp;
    if (*rear == NULL)
        printf("empty queue\n");
    else if(*rear == *front)
        {
            temp = *front;
            printf("deleted:: %i\n", temp->data);
            *front = NULL;
            *rear  = NULL;
            free(temp);
        }
    else
        {
            temp = *front;
            printf("deleted:: %i\n", temp->data);
            *front = temp->next;
            free(temp);
        }
}
