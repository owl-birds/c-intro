#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//stack data structures first in last out

typedef struct stack{
    int score;
    struct stack *next;
}Stack;

int isempty(Stack *root);
int peek(Stack *root);
void push(Stack **root, int score);
int pop(Stack **root);

int main()
{
    Stack *root1 = NULL;
    push(&root1, 100);
    push(&root1, 300);
    push(&root1, 900);
    push(&root1, 1000);
    printf("%i\n", isempty(root1));
    //printf("%i\n", root1->next->score);
    printf("%i\n", peek(root1));
    printf("----------\n");
    printf("%i\n", pop(&root1));
    printf("%i\n", pop(&root1));
    printf("%i\n", pop(&root1));
    printf("%i\n", pop(&root1));
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
    newstack->score = score;
    newstack->next = *root;
    *root = newstack;
}

int peek(Stack *root)
{
    if (isempty(root) == 1)
        return 0;
    return root->score;
}

int pop(Stack **root)
{
    Stack *temp = *root;
    if (isempty(*root) == 1)
        printf("empty stack");
    *root = temp->next;
    int popped = temp->score;
    free(temp);
    return popped;
}
