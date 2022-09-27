#include <stdio.h>

int main()
{
    //defining a variable (data type)
    enum primarycolor {blue, red, yellow};
    enum primarycolor mycolor, yourcolor;
    mycolor = blue;
    yourcolor = red;

    printf("color: %i", mycolor);
    // the result color : 0 (becouse the index of blue is 0
    printf("\ncolor2: %i", yourcolor);
    return 0;
}
