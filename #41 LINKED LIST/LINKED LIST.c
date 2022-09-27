#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct node
{
    int score;
    struct node *next;
} Node;


void createLL(int x);
void printLL(Node *temp);
int manyLL(Node *temp);
double meanLL(Node *temp);
int sumLL(Node *temp);
int max(Node *temp);
int min(Node *temp);
void searchLL(Node *temp, int x);
void sortLL(Node *temp);
void change(int *a, int *b);
Node *head = NULL;

int main()
{
    char title[40] = "LINKED LIST PART 1";
    Node *temp;
    Node data1;
    int i = 0;
    printf("%s\n", title);
    while (i < 40)
    {
        title[i] = (char)tolower(title[i]);
        i += 1;
    }
    printf("\n%s\n\n", title);
    if (head == NULL)
    {
        data1.score = 25;
        data1.next = NULL;
        head = &data1;
    }

    createLL(55);
    createLL(69);
    createLL(70);
    createLL(22);
    createLL(95);

    //printf("%i", temp->score);
    printLL(temp);
    printf("\nhow many datas:: %i\n", manyLL(temp));
    printf("\nthe sum od all datas:: %i\n", sumLL(temp));
    printf("\nthe mean of the datas:: %lf\n", meanLL(temp));
    printf("\nthe maximum data:: %i\n", max(temp));
    printf("\nthe minimum data:: %i\n", min(temp));
    searchLL(temp,22);

    sortLL(temp);
    printLL(temp);

    return 0;
}

void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b =  c;
}

void createLL(int x)
{
    Node *temp;
    Node *newnode = malloc(sizeof(Node));
    temp = head;
    if (head == NULL)
    {
        head = &newnode;
        newnode->score = x;
        newnode->next = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->score = x;
        newnode->next = NULL;
    }
}

void printLL(Node *temp)
{
    temp = head;
    int i = 1;
    while (temp->next != NULL)
    {
        printf("data[%i]:: %i\n", i, temp->score);
        temp = temp->next;
        i += 1;
    }
    if (temp->next == NULL)
        printf("data[%i]:: %i\n", i, temp->score);
}

int manyLL(Node *temp)
{
    temp = head;
    int i = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i += 1;
    }
    i += 1;
    return i;
}

int sumLL(Node *temp)
{
    temp = head;
    int res = 0;
    while (temp->next != NULL)
    {
        res = res + temp->score;
        temp = temp->next;
    }
    if (temp->next == NULL)
        res += temp->score;
    return res;
}

double meanLL(Node *temp)
{
    double res = 0;
    double sum = sumLL(temp);
    double many = manyLL(temp);
    res = sum/many;
    return res;
}

int max(Node *temp)
{
    temp = head;
    int res = temp->score;
    while (temp->next != NULL)
    {
        if (res < temp->score)
        {
            res = temp->score;
        }
        temp = temp->next;
    }
    if (res < temp->score)
    {
        res = temp->score;
    }
    return res;
}

int min(Node *temp)
{
    temp = head;
    int res = temp->score;
    while (temp->next != NULL)
    {
        if (res > temp->score)
            res = temp->score;
        temp = temp->next;
    }
    if (res > temp->score)
        res = temp->score;
    return res;
}

void searchLL(Node *temp, int x)
{
    temp = head;
    int l = manyLL(temp);
    int i = 1;
    while (temp->next != NULL)
    {
        if (x == temp->score)
        {
            printf("\n%i found\n", x);
            return;
        }
        temp = temp->next;
        i += 1;
    }
    if (i == l)
    {
        printf("\n%i not found\n", x);
        return;
    }
}

void sortLL(Node *temp)
{
    int lmt = manyLL(temp);
    Node *p;
    int i = 0;
    p = head;
    while (i != lmt)
    {
        temp = head;
            while (temp->next != NULL)
        {
            if (p->score > temp->score)
            {
                change(&(p->score), &(temp->score));
            }
            temp = temp->next;
        }
        if (p->score > temp->score)
            {
                change(&(p->score), &(temp->score));
            }
        p = p->next;
        i += 1;
    }
}
