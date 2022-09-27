#include <stdio.h>
#include <stdlib.h>

// simplified array stack

void push(int stack[], int **top, int data, int n);
void pop(int stack[], int **top);

int main()
{
    int stack1[5];
    int *top = NULL;

    push(stack1, &top, 100, 5);
    push(stack1, &top, 200, 5);
    push(stack1, &top, 300, 5);
    push(stack1, &top, 400, 5);
    push(stack1, &top, 500, 5);
    pop(stack1, &top);
    pop(stack1, &top);
    pop(stack1, &top);
    //pop(stack1, &top);
    //pop(stack1, &top);

    printf("top     :: %i\n", *top);
    return 0;
}

void push(int stack[], int **top, int data, int n)
{
    if ((*top - stack) == (n-1))
        printf("stack full\n");
    else if (*top == NULL)
    {
        *top = stack;
        **top = data;
    }
    else
    {
        *top += 1;
        **top = data;
    }
}

void pop(int stack[], int **top)
{
    if (*top == stack)
    {
        printf("deleted :: %i\n", **top);
        *top = NULL;
    }
    else
    {
        printf("deleted :: %i\n", **top);
        *top -= 1;
    }
}

