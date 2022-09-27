#include <stdio.h>
#include <stdlib.h>

// finding the area of rectangle
int main()
{
    int length, height, perimeter, area;
    double lebar = 23.65;
    double tinggi = 12.54;
    double panjang = 30.23;
    double luas = 0.0;

    printf("#1\n");
    length = 10;
    perimeter = 9;
    area = length * perimeter;
    printf("the area of rectangle:: %d", area);

    printf("\n\n#2\n");
    luas = panjang * lebar;
    printf("Luas Persegi panjang:: %.2lf", luas);

    return 0;
}
