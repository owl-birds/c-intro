#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct node
{
    char name[30];
    int  age;
    struct node *next;
}Node;

//initLL
Node *head = NULL;

void startLL(char name[30], int x);
void CrLL(char name[30], int x);
void printLL(Node *temp);

int main()
{
    char name[30] = "Arif Ikhwan Hendra";
    int x;
    Node *temp;


    Node data1;
    head = &data1;
    //scanf("%[^\n]s", data1.name);
    strncpy(data1.name, name, sizeof(name) - 1);
    data1.age = 19;
    data1.next = NULL;
    //printf("name :: %s\n", head->name);
    //printf("age  :: %i\n", head->age);

    printf("\n------\n");
    printf("enter name:: ");
    scanf("%[^\n]s", name);
    printf("enter age :: ");
    scanf("%i", &x);

    CrLL(name, x);
    CrLL(name, x);

    printLL(temp);

    return 0;
}

void startLL(char name[30], int x)
{

}

void CrLL(char name[30], int x)
{
    Node *newnode = malloc(sizeof(Node));
    Node *temp;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    strcpy(newnode->name, name);
    newnode->age = x;
    newnode->next = NULL;
}

void printLL(Node *temp)
{
    temp = head;
    int i = 1;
    while (temp->next != NULL)
    {
        printf("\n[%i]name :: %s\n", i,temp->name);
        printf("[%i]age  :: %i\n", i,temp->age);
        printf("\n");
        temp = temp->next;
        i += 1;
    }
    if (temp->next == NULL)
    {
        printf("[%i]name :: %s\n", i,temp->name);
        printf("[%i]age  :: %i\n", i,temp->age);
        printf("\n");
    }
}
