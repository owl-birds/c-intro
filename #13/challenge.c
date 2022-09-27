#include <stdio.h>

int main()
{
    enum day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
    enum day D;


    for (D = monday; D <= sunday; D+=1)
    {
        if (D == friday)
        {
            printf("\n");
            continue;
        }


        printf("its not friday \n");
    }

    return 0;
}
