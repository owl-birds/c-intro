#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char  *itemName;
    int   quantity ;
    float price ;
    float amount;
}item;

void printdata(item *item1);

int main()
{
    item *item1 = malloc(sizeof(item));
    item1->itemName = malloc(10*sizeof(char));
    strcpy(item1->itemName, "sugar");
    item1->quantity  =  55;
    item1->price     = 9999.9;
    item1->amount  = item1->price * (float)item1->quantity;

    printf("data 1\n");
    printdata(item1);

    free(item1);
    free(item1->itemName);

    return 0;
}

void printdata(item *item1)
{
    printf("item name :: %s\n", item1->itemName);
    printf("quantity  :: %i\n", item1->quantity);
    printf("price     :: %.2f\n", item1->price);
    printf("amount    :: %.2f\n", item1->amount);
}
