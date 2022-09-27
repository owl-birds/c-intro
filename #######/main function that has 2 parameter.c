#include <stdio.h>

//command line arguments
int main(int argcount, char *argvar[])
{
    int numberofarguments = argcount;
    char *argument1 = argvar[0];
    char *argument2 = argvar[1];

    printf("Number of argument:: %d", numberofarguments);
    //progrram name
    printf("\nArgument1 is the program name: %s", argument1);
    //arif:::set program arguments
    printf("\nArgument2 is the command line argument: %s", argument2);

    return 0;
}
