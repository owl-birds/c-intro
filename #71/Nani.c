#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
    int day;
    int month;
    int year;
}Date;

typedef struct{
    int hour;
    int minute;
}Time;

typedef struct{
    Date sdate;
    Time stime;
}DT;

typedef struct{
    struct{
     char name[20];
     char nim[10];
    }MHS;
    char prodi[10];
}datamhs;

int main()
{
    Date today = {.day = 10, .month = 10, .year = 2000};
    printf("%i/%i/%i\n", today.day, today.month, today.year);
    Date today2 = {20,10,1999};
    printf("%i/%i/%i\n", today2.day, today2.month, today2.year);

    Date datearr[5]; // making array of struct
    datearr[0].day   = 10;
    datearr[0].month = 12;
    datearr[0].year  = 2000;

    printf("datearr[0]::%i/%i/%i\n", datearr[0].day, datearr[0].month, datearr[0].year);

    DT dob;

    dob.sdate.day   = 10;
    dob.sdate.month = 10;
    dob.sdate.year  = 2000;
    dob.stime.hour   = 6;
    dob.stime.minute = 40;

    printf("%i:%i %i/%i/%i\n", dob.stime.hour, dob.stime.minute
           , dob.sdate.day, dob.sdate.month, dob.sdate.year);

    datamhs mhs1;
    strcpy(mhs1.MHS.name, "Arif Ikhwan");
    strcpy(mhs1.MHS.nim, "221810193");
    strcpy(mhs1.prodi, "komputasi statsitik");

    printf("\n");
    printf("name ::%s\n", mhs1.MHS.name);
    printf("NIM  ::%s\n", mhs1.MHS.nim);
    printf("prodi::%s\n", mhs1.prodi);

    return 0;
}
