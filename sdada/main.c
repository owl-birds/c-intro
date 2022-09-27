#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char name[30];
    char NIM[10];
    int age;
    struct node *next;
}Node;

void createLL(Node **head, char name[], char NIM[], int age);
void printLL(Node **head);
void sortLL(Node **head);
int datacount(Node **head);
void changeint(int *a, int *b);
void changestr(char str1[], char str2[]);

int main()
{
    Node *head1 = NULL;
    char name1[30] = "Arif Ikhwan Hendra";
    char NIM1[10]  = "221810193";
    int  age1 = 19;
    createLL(&head1, name1, NIM1, age1);

    printf("%s\n", head1->name);
    printf("%s\n", head1->NIM);
    printf("%i\n", head1->age);

    printf("\n");
    char name2[30] = "lol lol";
    char NIM2[10]  = "2222222";
    int  age2      = 11;
    createLL(&head1, name2, NIM2, age2);

    char name3[30] = "opo opo";
    char NIM3[10]  = "333333";
    int  age3      = 20;
    //createLL(&head1, name3, NIM3, age3);

    sortLL(&head1);

    printLL(&head1);

    //char tempstr[50];
    //strcpy(tempstr, name1);
    //strcpy(name1, name2);
    //strcpy(name2, tempstr);

    changestr(name3,name1);

    printf("\ndatas::%i\n", datacount(&head1));
    printf("name1 :: %s\n", name1);
    return 0;
}

void changeint(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b =  c;
}

void changestr(char str1[], char str2[])
{
    char tempstr[50];
    strcpy(tempstr, str1);
    strcpy(str1, str2);
    strcpy(str2, tempstr);
}

void createLL(Node **head, char name[], char NIM[], int age)
{
    Node *newnode = malloc(sizeof(Node));
    Node * temp;
    temp = *head;
    if (*head == NULL)
    {
        *head = newnode;
        strcpy(newnode->name, name);
        strcpy(newnode->NIM, NIM);
        newnode->age = age;
        newnode->next = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {temp = temp->next;}
        temp->next = newnode;
        strcpy(newnode->name, name);
        strcpy(newnode->NIM, NIM);
        newnode->age = age;
        newnode->next = NULL;
    }
}

void printLL(Node **head)
{
    Node *temp;
    temp = *head;
    int i = 1;
    while (temp->next != NULL)
    {
        printf("Name[%i] :: %s\n", i, temp->name);
        printf("NIM [%i] :: %s\n", i, temp->NIM);
        printf("Age [%i] :: %i\n", i, temp->age);
        temp = temp->next;
        i += 1;
    }
    if (temp->next == NULL)
    {
        printf("Name[%i] :: %s\n", i, temp->name);
        printf("NIM [%i] :: %s\n", i, temp->NIM);
        printf("Age [%i] :: %i\n", i, temp->age);
    }
}

int datacount(Node **head)
{
    Node *temp;
    temp = *head;
    int i = 0;
    while (temp->next != NULL)
    {
        i += 1;
        temp = temp->next;
    }
    i += 1;
    return i;
}

void sortLL(Node **head)
{
    Node *temp;
    Node *p;
    int lim = datacount(&head);
    int j = 0;
    p = *head;
    while (j < lim)
    {
        temp = *head;
        while (temp->next != NULL)
        {
            if (p->age > temp->age)
            {
                changeint(&(p->age), &(temp->age));
                changestr(p->name  , temp->name);
                changestr(p->NIM   , temp->NIM);
            }
            temp = temp->next;
        }
        if (p->age > temp->age)
            {
                changeint(&(p->age), &(temp->age));
                changestr(p->name  , temp->name);
                changestr(p->NIM   , temp->NIM);
            }
        p = p->next;
        j += 1;
    }
}
