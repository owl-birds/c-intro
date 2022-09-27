#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    struct{
        int day;
        int month;
        int year;
    }hireDate;
    float salary;
}Data;

void printdata(Data *data);

int main()
{
    Data *employee1 = malloc(sizeof(Data));
    strcpy(employee1->name, "Arif Ikhwan Hendra");
    employee1->hireDate.day   = 20;
    employee1->hireDate.month = 10;
    employee1->hireDate.year  = 2018;
    employee1->salary = 2000.00;

    printdata(employee1);

    return 0;
}

void printdata(Data *data)
{
    printf("name     :: %s\nhiredate :: %i/%i/%i\nsalary   :: %.2f\n",
           data->name, data->hireDate.day, data->hireDate.month, data->hireDate.year, data->salary);
}
