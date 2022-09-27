#include <stdio.h>

int main()
{
    char letter;
    enum month {
               january=1, february=2, march=3, april=4,
               mey=5, june=6, july=7, august=8, september=9,
               october=10, november=11, december=12
                };
    enum month monthB;
    int date, year;
    char  name[15];

    monthB = october;
    date = 26;
    year = 2000;
    name = "Arif Ikhwan";

    printf("name: %s", name);


    //letter = 'A';

    //printf("\'a\' upper case:: %c", letter);


    return 0;
}
