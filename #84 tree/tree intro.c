#include <stdio.h>

//binary tree using array

void insBTreeArr(int tree[], int *root, int n, int data);
void initBT(int tree[], int n);

int main()
{
    int tree[8];
    int root = 0;
    initBT(tree, 8);
    insBTreeArr(tree, &root, 8, 111);
    insBTreeArr(tree, &root, 8, 112);
    insBTreeArr(tree, &root, 8, 113);
    insBTreeArr(tree, &root, 8, 114);
    insBTreeArr(tree, &root, 8, 115);
    insBTreeArr(tree, &root, 8, 116);
    insBTreeArr(tree, &root, 8, 117);
    printf("root::%i\n", tree[root]);
    for (int i = 0; i < 8; i += 1)
        printf("%i ", tree[i]);
    return 0;
}

void initBT(int tree[], int n)
{
    for (int i = 0; i < n; i += 1)
        tree[i] = 0;
}

void insBTreeArr(int tree[], int *root, int n, int data)
{
    if (*root == 0)
    {
        *root += 1;
        tree[*root] = data;
        return;
    }
    else
    {
        int i = *root;
        while(tree[i] != 0)
        {
            i += 1;
        }
        tree[i] = data;
    }
}
