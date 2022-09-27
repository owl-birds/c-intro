#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//global variable
int n1,n2,n3,n4,n5,n6,n7,n8,n9;
int res = 3;

void interface();
int Uinput1(); int Uinput2();
int check();
void clrscr();


int main()
{
    int tries = 0;
    int limit = 7;
    n1=1;n2=2;n3=3;n4=4;n5=5;n6=6;n7=7;n8=8;n9=9;
    //interface();

    // INTERFACE
    while (tries < limit)
    {
        check();
        if (res == 1)
            break;
        else if (res == 2)
            break;
        printf(" 10 for player 1 and 20 for player 2");
        printf("\n\n\n");
        printf("  ________________\n");
        printf("\n");
        printf("   %i    %i     %i  \n",n1,n2,n3);
        printf("  ________________");
        printf("\n\n");
        printf("   %i    %i     %i \n", n4,n5,n6);
        printf("  ________________");
        printf("\n\n");
        printf("   %i    %i     %i \n", n7,n8,n9);
        printf("  ________________\n");
        printf("\n\n");

        if (tries % 2 == 0)
            {Uinput1();}
        else
            {Uinput2();}
        tries += 1;
        clrscr();
    }

        printf("  ________________\n");
        printf("\n");
        printf("   %i    %i     %i  \n",n1,n2,n3);
        printf("  ________________");
        printf("\n\n");
        printf("   %i    %i     %i \n", n4,n5,n6);
        printf("  ________________");
        printf("\n\n");
        printf("   %i    %i     %i \n", n7,n8,n9);
        printf("  ________________\n");
        printf("\n\n");

    if (res == 1)
        printf("player 1 won\n\n");
    else if (res == 2)
        printf("player 2 won\n\n");
    else
        printf("TIE\n\n");
    return 0;
}

void clrscr()
{
    system("@cls||clear");
}

void interface()
{
    printf("\n\n\n\n");
    printf("\n");
    printf(" _ _|_ _|_ _");
    printf("\n");
    printf(" _ _|_ _|_ _");
    printf("\n");
    printf(" _ _|_ _|_ _\n");
    printf("    |   |   ");
    printf("\n");
}

int Uinput1()
{
    int p1;
        printf("Enter a number 1-9 p1:: ");
        scanf("%i", &p1);
    if      (p1 == 1)
        n1 = 10;
    else if (p1 == 2)
        n2 = 10;
    else if (p1 == 3)
        n3 = 10;
    else if (p1 == 4)
        n4 = 10;
    else if (p1 == 5)
        n5 = 10;
    else if (p1 == 6)
        n6 = 10;
    else if (p1 == 7)
        n7 = 10;
    else if (p1 == 8)
        n8 = 10;
    else if (p1 == 9)
        n9 = 10;
    else
        printf("invalid input\n");
    return p1;
}

int Uinput2()
{
    int p2;
        printf("Enter a number 1-9 p2:: ");
        scanf("%i", &p2);
    if      (p2 == 1)
        n1 = 20;
    else if (p2 == 2)
        n2 = 20;
    else if (p2 == 3)
        n3 = 20;
    else if (p2 == 4)
        n4 = 20;
    else if (p2 == 5)
        n5 = 20;
    else if (p2 == 6)
        n6 = 20;
    else if (p2 == 7)
        n7 = 20;
    else if (p2 == 8)
        n8 = 20;
    else if (p2 == 9)
        n9 = 20;
    else
        printf("invalid input\n");
    return p2;
}

int check()
{
    //p1 winning condition
    if      (n1 == 10 && n2 == 10 && n3 == 10)
        {res = 1;   return res;}
    else if (n4 == 10 && n5 == 10 && n6 == 10)
        {res = 1;   return res;}
    else if (n7 == 10 && n8 == 10 && n9 == 10)
        {res = 1;   return res;}
    else if (n1 == 10 && n4 == 10 && n7 == 10)
        {res = 1;   return res;}
    else if (n2 == 10 && n5 == 10 && n8 == 10)
        {res = 1;   return res;}
    else if (n3 == 10 && n6 == 10 && n9 == 10)
        {res = 1;   return res;}
    else if (n1 == 10 && n5 == 10 && n9 == 10)
        {res = 1;   return res;}
    else if (n3 == 10 && n5 == 10 && n7 == 10)
        {res = 1;   return res;}

    //p2 winning condition
    if      (n1 == 20 && n2 == 20 && n3 == 20)
        {res = 2;   return res;}
    else if (n4 == 20 && n5 == 20 && n6 == 20)
        {res = 2;   return res;}
    else if (n7 == 20 && n8 == 20 && n9 == 20)
        {res = 2;   return res;}
    else if (n1 == 20 && n4 == 20 && n7 == 20)
        {res = 2;   return res;}
    else if (n2 == 20 && n5 == 20 && n8 == 20)
        {res = 2;   return res;}
    else if (n3 == 20 && n6 == 20 && n9 == 20)
        {res = 2;   return res;}
    else if (n1 == 20 && n5 == 20 && n9 == 20)
        {res = 2;   return res;}
    else if (n3 == 20 && n5 == 20 && n7 == 20)
        {res = 2;   return res;}
}
