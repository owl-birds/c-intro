#include <stdio.h>
//add two matrix

void view(int a, int b)
{
    int x[a][b];
    for (int i = 0; i < a; i++)
     {
     int j = 0;
       for (; j < b; j++)
        {printf("%i ", x[i][j]);}
     if (j == 3)
        {printf("\n");}
     }
}


int main()
{
    int r,c;

    //create 1
    printf(" first matrix\n");
    printf("row: ");
    scanf("%i", &r);
    printf("column: ");
    scanf("%i", &c);
    int matrix1[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("row%icolumn%i:: ", i, j);
            scanf("%i", &matrix1[i][j]);
        }
    }
    printf("\n");
    //create 2
    printf(" second matrix\n");
    printf("row: ");
    scanf("%i", &r);
    printf("column: ");
    scanf("%i", &c);
    int matrix2[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("row%icolumn%i:: ", i, j);
            scanf("%i", &matrix2[i][j]);
        }
    }

    //view(r, c);
    /*printf("\n");
    printf(" first matrix\n");
    for (int i = 0; i < r; i++)
     {
     int j = 0;
       for (; j < c; j++)
        {printf("%i ", matrix1[i][j]);}
     if (j == c)
        {printf("\n");}
     }*/

     int Mres[r][c];
     for (int i = 0; i < r; i++)
     {
         for (int j = 0; j < c; j++)
         {
             Mres[i][j] = matrix1[i][j] + matrix2[i][j];
         }
     }

    printf("\n");
    printf(" result matrix\n");
    for (int i = 0; i < r; i++)
     {
     int j = 0;
       for (; j < c; j++)
        {printf("%i ", Mres[i][j]);}
     if (j == c)
        {printf("\n");}
     }


    return 0;
}
