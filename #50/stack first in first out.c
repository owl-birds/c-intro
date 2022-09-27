#include <stdio.h>
#include <stdlib.h>

//stack data structure first in first out

typedef struct stack{
    int score;
    struct stack *next;
}Stack;

void push(Stack **root, int score);
int isempty(Stack *root);
int pop(Stack **root);
void peek(Stack *root);

int main()
{
    Stack *root1 = NULL;
    push(&root1, 500);
    push(&root1, 400);
    push(&root1, 300);
    push(&root1, 200);
    push(&root1, 100);
    peek(root1);
    printf("--------\n");
    printf("%i\n", pop(&root1));
    printf("%i\n", pop(&root1));
    printf("%i\n", pop(&root1));
    printf("%i\n", pop(&root1));
    printf("%i\n", pop(&root1));
    printf("--------\n");
    peek(root1);
    return 0;
}

int isempty(Stack *root)
{
    if (root == NULL)
        return 1;
    else
        return 0;
}

void push(Stack **root, int score)
{
    Stack *newstack = malloc(sizeof(Stack));
    Stack *temp = *root;
    newstack->score = score;
    newstack->next = NULL;
    if (isempty(temp) == 1)
    {
        *root = newstack;
    }
    else
    {
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newstack;
    }
}

int pop(Stack **root)
{
    Stack *temp = *root;
    *root = temp->next;
    int popped = temp->score;
    free(temp);
    return popped;
}

void peek(Stack *root)
{
    if (root == NULL)
        printf("empty stack");
    else
        printf("%i\n", root->score);
}
