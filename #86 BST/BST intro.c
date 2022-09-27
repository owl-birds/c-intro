#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int score;
    struct node *Lchild;
    struct node *Rchild;
}Node;

void insertBST(Node **root, int data);

int main()
{
    Node *root1 = NULL;
    insertBST(&root1, 200);
    insertBST(&root1, 300);
    insertBST(&root1, 100);
    insertBST(&root1, 50);
    printf("root :: %i\n", root1->score);
    printf("root R child :: %i\n", root1->Rchild->score);
    printf("root L child :: %i\n", root1->Lchild->score);
    printf("root child L child :: %i\n", root1->Lchild->Lchild->score);
    return 0;
}

void insertBST(Node **root, int data)
{
    Node *newnode = malloc(sizeof(Node));
    Node *temp = *root;
    newnode->score = data;
    newnode->Lchild = NULL;
    newnode->Rchild = NULL;
    while (1)
    {
        if (*root == NULL)
        {
            *root = newnode;
            return;
        }
        else if (temp->Lchild == NULL && data < temp->score)
        {
            temp->Lchild = newnode;
            return;
        }
        else if (temp->Rchild == NULL && data >= temp->score)
        {
            temp->Rchild = newnode;
            return;
        }
        if (temp->Lchild != NULL && data < temp->score)
        {
            temp = temp->Lchild;
        }
        else if (temp->Rchild != NULL && data >= temp->score)
        {
            temp = temp->Rchild;
        }
    }
}
