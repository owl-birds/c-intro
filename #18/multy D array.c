#include <stdio.h>

// array[][][][][][][][]
int main()
{
    int matrix[3][3] = {
                       {3,4,5},
                       {4,5,7},
                       {6,3,8}
                       };

    for (int i = 0; i < 3; i++)
     {
     int j = 0;
       for (; j < 3; j++)
        {printf("%i ", matrix[i][j]);}
       if (j == 3)
        printf("\n");
     }

     return 0;
}
