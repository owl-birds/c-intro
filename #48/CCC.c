#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// double linked list

typedef struct node{
    int score;
    struct node *prev;
    struct node *next;
}Node;

void insertDLL(Node **head, int score);
void printDLLnext(Node *head);
void printDLLprev(Node *head);

int main()
{
    Node *head1 = NULL;
    insertDLL(&head1, 100);
    insertDLL(&head1, 200);
    insertDLL(&head1, 300);
    insertDLL(&head1, 400);
    printf("%i\n", head1->score);
    printf("%i\n", head1->next->prev->score);
    printf("nextprinttype\n");
    printf("-------\n");
    printDLLnext(head1);
    printf("prevtprinttype\n");
    printf("-------\n");
    printDLLprev(head1);
    return 0;
}

void insertDLL(Node **head, int score)
{
    Node *temp = *head;
    Node *newnode = malloc(sizeof(Node));
    newnode->score = score;
    if (*head == NULL)
        {
            *head = newnode;
            newnode->next = NULL;
            newnode->prev = NULL;
        }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = NULL;
    }
}

void printDLLnext(Node *head)
{
    Node *temp = head;
    do
    {
        printf("%i\n", temp->score);
        temp = temp->next;
    }while (temp->next != NULL);
    printf("%i\n", temp->score);
}

void printDLLprev(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    while (temp->prev != NULL)
    {
        printf("%i\n", temp->score);
        temp = temp->prev;
    }
    printf("%i\n", temp->score);
}
