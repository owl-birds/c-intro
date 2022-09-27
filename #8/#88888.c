#include <stdio.h>

int main();
{
    enum gender {male, female};
    enum gender mygender,anothergender;
    mygender = male;
    anothergender = female;
    printf("your gender:: %i", mygender);
    return 0;
}
