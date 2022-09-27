#include <stdio.h>

int main()
{
    enum gender {male, female};
    enum gender gender1, gender2;
    gender1 = male;
    gender2 = female;

    printf("Male: %i", gender1);
    printf("\nFemale: %i", gender2);
    return 0;
}
