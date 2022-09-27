#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int score;
    struct node *next;
}data;

void insertdata(data **head, int score);
void printdata(data *head);
int Cpalindrome(char str[]);
int datacount(data *head);
void DelData(data **head, int score);
int LLcompare(data *head1, data *head2);


int main()
{
    data *head1 = NULL;
    data *head2 = NULL;
    insertdata(&head1, 100);
    insertdata(&head1, 101);
    insertdata(&head1, 102);
    insertdata(&head1, 103);

    insertdata(&head2, 100);
    insertdata(&head2, 101);
    insertdata(&head2, 102);
    insertdata(&head2, 103);

    printf("LL1 == LL2 :: %i\n", LLcompare(head1,head2));

    //DelData(&head1, 101);
    printdata(head1);
    printf("\n");
    printf("%i\n", Cpalindrome("apa"));
    printf("datas::%i\n", datacount(head1));
    //////////////
    /*printf("\n------------------\n");
    data *temp1 = head1;
    data *temp2 = temp1->next;
    printf("%i\n",temp2->score);
    printf("\n----\n");
    temp1->next = temp2->next;
    free(temp2);
    printdata(head1);
    printf("\n-------------------------------------\n");*/
    /////////////
    return 0;
}

void insertdata(data **head, int score)
{
    data *newdata = malloc(sizeof(data));
    newdata->score = score;
    newdata->next = NULL;
    data *temp;
    temp = *head;
    if (*head == NULL)
        *head = newdata;
    else
    {
        while (temp->next != NULL)
            {temp = temp->next;}
        temp->next = newdata;
    }
}
void printdata(data *head)
{
    data *temp = head;
    if (head == NULL)
        {
            printf("empty list\n");
            return;
        }
    while(temp->next != NULL)
    {
        printf("%i\n", temp->score);
        temp = temp->next;
    }
    printf("%i\n", temp->score);
}

int Cpalindrome(char str[])
{
    int length = strlen(str)-1;
    int j = length;
    int c = 0;

    for (int i = 0;i < length; i += 1)
    {
        if (str[i] == str[j])
            c += 1;
        j -= 1;
    }

    if (c == length)
        return 1;
    else
        return 0;
}

int datacount(data *head)
{
    data *temp = head;
    int i = 1;
    if (head == NULL)
        return 0;
    while (temp->next != NULL)
        {
            i+=1;
            temp = temp->next;
        }
    return i;
}

void DelData(data **head, int score)
{
    data *temp1 = *head;
    data *temp2;
    if (*head == NULL)
    {
        printf("empty list\n");
        return;
    }
    else if (temp1->score == score && temp1->next == NULL)
    {
        free(temp1);
        *head = NULL;
    }
    else if (temp1->score == score && temp1->next != NULL)
    {
        *head = temp1->next;
        free(temp1);
    }
    else
    {
        temp2 = temp1->next;
        while (temp2->score != score && temp2->next != NULL)
        {
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
        if (temp2->next == NULL && temp2->score == score)
        {
            temp1->next = NULL;
            free(temp2);
            return;
        }
        else if (temp2->next != NULL && temp2->score == score)
        {
            temp1->next = temp2->next;
            free(temp2);
            return;
        }
    }
}

int LLcompare(data *head1, data *head2)
{
    data *temp1 = head1;
    data *temp2 = head2;
    int c = 0;
    int n = 0;
    if (head1 == NULL && head2 == NULL)
    {
        return 1;
    }
    else if (datacount(head1) != datacount(head2))
    {
        return 0;
    }
    else
    {
    while (temp1->next != NULL)
    {
        n+=1;
        if (temp1->score == temp2->score)
        {
            c+=1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    n += 1;
    if (temp1->score == temp2->score)
        {
            c+=1;
        }
    //printf("\nn%i c%i",n,c);
    if (c == n)
        return 1;
    else
        return 0;
    }
}
