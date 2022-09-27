#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int data;
    struct stack *next;
}Stack;

void push(Stack **top, int data);
void pop(Stack **top);

int main()
{
    Stack *top1 = NULL;
    push(&top1, 100);
    push(&top1, 200);
    push(&top1, 300);
    pop(&top1);
    pop(&top1);
    printf("%i\n", top1->data);

    return 0;
}

void push(Stack **top, int data)
{
    Stack *newstack = malloc(sizeof(Stack));
    newstack->data = data;
    newstack->next = *top;
    *top = newstack;
}

void pop(Stack **top)
{
    if (*top == NULL)
        printf("-\n");
    else
    {
        Stack *temp = *top;
        printf("deleted:: %i\n",  temp->data);
        *top = temp->next;
        free(temp);
    }
}
