#include <stdio.h>
#include <stdlib.h>


void push(int stack[], int *top, int score, int m);
int pop(int stack[], int *top);
int isempty(int top, int m);

int main()
{
    int stack1[5];
    int top1 = -1;
    push(stack1, &top1, 100, 5);
    push(stack1, &top1, 200, 5);
    push(stack1, &top1, 300, 5);
    push(stack1, &top1, 400, 5);
    push(stack1, &top1, 500, 5);
    //printf("deleted:: %i\n", pop(stack1, &top1));
    //printf("deleted:: %i\n", pop(stack1, &top1));
    //printf("deleted:: %i\n", pop(stack1, &top1));
    printf("%i\n", top1);
    printf("%i\n", stack1[top1]);

    return 0;
}

int isempty(int top, int m)
{
    if (top == -1)
        return 1;
    else if (top == m-1)
        return 0;
}

void push(int stack[], int *top, int score, int m)
{
    if (*top == m - 1)
        printf("stack full\n");
    else
        {
            *top+=1;
            stack[*top] = score;
        }
}

int pop(int stack[], int *top)
{
    if (*top == -1)
            return 0;
    else
        {
            int n = stack[*top];
            *top -= 1;
            return n;
        }
}

