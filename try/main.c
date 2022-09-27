#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char name[30];
    char NIM[10];
    int age;
    struct node *next;
}Node;

typedef struct{
    Node mhs;
}MHS;

int main()
{
    MHS m1;
    Node *head;
    head = &m1;
    m1.mhs.age = 100;
    printf("%i\n",head->age);
    head->age = 999;
    printf("%i",head->age);
    return 0;
}
