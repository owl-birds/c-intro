#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int score;
        struct node *next;
    } Node;

void printLL(Node *temp);
int sumLL(Node *temp);
Node *head = NULL;


void change(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b =  c;
}

int main()
{

    Node *temp;
    Node *p;

    //1
    Node data1;
    //inserting score == 90 to data1
    data1.score = 90;
    data1.next = NULL;
    head = &data1;

    //temp = head;
    //printf("\n\ntemp:: %i\n\n", temp->score);

    p = &data1;

    //2
    Node data2;
    // inserting score == 100 to data2
    data2.score = 100;
    data1.next = &data2;
    data2.next = NULL;

    change(&(p->score), &(data2.score));

    //temp = temp->next;
    //temp->score = 9999;
    //printf("\ntemp2:: %i\n\n", temp->score);

    //3
    Node data3;
    // inserting score == 85 to data3
    data3.score = 85;
    data2.next = &data3;
    data3.next = NULL;

    //temp = temp->next;
    //printf("\ntemp3:: %i\n\n", temp->score);

    // testing

    //4
    Node data4;
    // inserting score 55 to data4
    data4.score = 55;
    data3.next = &data4;
    data4.next = NULL;

    //temp = temp->next;
    //printf("\ntemp4:: %i\n\n", temp->score);

    //5
    Node data5;
    data5.score = 34;
    data4.next = &data5;
    data5.next = NULL;

    //printing
    //printf("data1:: %i", head->score);
    //printf("\ndata2:: %i", data1.next->score);
    //printf("\ndata3:: %i", data2.next->score);

    printLL(temp);
    printf("\nthe sum of all score:: %i", sumLL(temp));
    return 0;
}

void printLL(Node *temp)
{
    temp = head;
    int i = 1;
    while (temp->next != NULL)
    {
        printf("data%i:: %i\n", i,temp->score);
        temp = temp->next;
        i ++;
    }
    if (temp->next == NULL)
        printf("data%i:: %i\n\n",i,temp->score);
}

int sumLL(Node *temp)
{
    temp = head;
    int sum = 0;
    while (temp->next != NULL)
    {
        sum = sum + temp->score;
        temp = temp->next;
        //printf("%i\n", sum);
    }
    return sum + temp->score;
}

