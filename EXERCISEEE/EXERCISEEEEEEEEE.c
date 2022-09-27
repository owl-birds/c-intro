#include <stdio.h>

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
    enum Company company1,company2,company3;
    company1 = XEROX;
    company2 = GOOGLE;
    company3 = EBAY;

    printf("value of the companies\n");
    printf("XEROX:: %i", company1);
    printf("\nGOOGLE:: %i", company2);
    printf("\nEBAY:: %i", company3);
    return 0;
}
