#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char name[30];
    char NIM[10];
    int age;
    struct node *next;
}Node;

typedef struct{
    Node mhs;
}MHS;

void createLL(Node **head, char name[], char NIM[], int age);
void printLL(Node **head);
void sortLL(Node **head, int lim);
int datacount(Node **head);
void changeint(int *a, int *b);
void changestr(char str1[], char str2[]);
void searchLLname(Node **head, char str[]);
int strcompare(char str1[], char str2[]);
void deleteLastDATA(Node **head);



int main()
{
    int lim;
    Node *head1 = NULL;
    char name1[30] = "Arif Ikhwan Hendra";
    char NIM1[10]  = "221810193";
    int  age1 = 19;
    createLL(&head1, name1, NIM1, age1);

    //printf("%s\n", head1->name);
    //printf("%s\n", head1->NIM);
    //printf("%i\n", head1->age);

    printf("\n");
    char name2[30] = "rapopo";
    char NIM2[10]  = "221810942";
    int  age2      = 15;
    createLL(&head1, name2, NIM2, age2);

    char name3[30] = "opo opo";
    char NIM3[10]  = "221810292";
    int  age3      = 20;
    createLL(&head1, name3, NIM3, age3);

    //
    //age3 = 99;
    //createLL(&head1, name3, NIM3, age3);
    //age3 = 199;
    //createLL(&head1, name3, NIM3, age3);
    sortLL(&head1, datacount(&head1));
    //

    //deleteLastDATA(&head1);
    //deleteLastDATA(&head1);
    //deleteLastDATA(&head1);


    printLL(&head1);
    searchLLname(&head1, "rapopo");

    //printf("\n1 found 0 not found:: %i\n", searchLLname(&head1, "Arif Ikhwan Hend"));


    //char tempstr[50];
    //strcpy(tempstr, name1);
    //strcpy(name1, name2);
    //strcpy(name2, tempstr);

    //changestr(name2,name1);

    printf("\ndatas::%i\n", datacount(&head1));
    //printf("name1 :: %s\n", name1);
    printf("\nresn1n2:: %i\n", strcompare(name1, name2));
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

    strcpy(newnode->name, name);
    strcpy(newnode->NIM, NIM);
    newnode->age = age;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        while (temp->next != NULL)
        {temp = temp->next;}
        temp->next = newnode;
    }
}

void printLL(Node **head)
{
    Node *temp;
    temp = *head;
    int i = 1;
    if (*head == NULL)
    {
        printf("\nempty list\n");
        return;
    }
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
    if (*head == NULL)
    {
        printf("\nempty list\n");
        return;
    }
    while (temp->next != NULL)
    {
        i += 1;
        temp = temp->next;
    }
    i += 1;
    return i;
}

void sortLL(Node **head, int lim)
{
    int i = 0;
    Node *temp;
    Node *p;
    p = *head;
    //printf("\n\n%i\n\n", lim);
    if (*head == NULL)
    {
        printf("\nempty list\n");
        return;
    }
    while (i < lim)
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
        i += 1;
    }
}

int strcompare(char str1[], char str2[])
{
    int lim1 = strlen(str1);
    //int lim2 = strlen(str2);
    int c = 0;
    for (int i = 0; i < lim1; i += 1)
    {
        if (str1[i] == str2[i])
            c += 1;
    }
    if (c == lim1)
        return 1;
    else
        return 0;
}

void searchLLname(Node **head, char str[])
{
    Node *temp = *head;
    if (*head == NULL)
    {
        printf("\nempty list\n");
        return;
    }
    while (temp->next != NULL)
    {
        if (strcompare(str, temp->name) == 1)
        {
            printf("\n%s found\n", str);
            return; //1;
        }
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        if (strcompare(str, temp->name) == 1)
            {
                printf("\n%s found\n", str);
                return; //1;
            }
        else
            {
                printf("\n%s not found\n", str);
                return; //0;
            }
    }
}

void deleteLastDATA(Node **head)
{
    Node *temp = *head;
    if (temp->next == NULL)
    {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next->next != NULL)
        {temp = temp->next;}
    free(temp->next);
    temp->next = NULL;
}
