#include <stdio.h>
#define months 12
#define years 5

//weather
int main()
{
    float rain[years][months] = {
                      {2,4,6,4,4,3,7,5,4,7,2,6},
                      {6,5.5,3,7,2,8,6,9,5,2,6,8},
                      {7,3,3,7,4,2,6,4,2,8,9,6},
                      {6,3,7,3,7,3,5,8,7,3,2,6},
                      {8,3,6,8,2,5,2,6,4,7,3,7}
                      };
    float sum, meanrainY;
    int Y[5] = {2010,2011,2012,2013,2014};

    for (int i = 0; i < years; i += 1)
    {
        sum = 0;
        meanrainY = 0;
        for (int j = 0; j < months; j += 1)
        {
            sum += rain[i][j];
        }
        meanrainY = sum / 12;
        printf("The average rain on year %i:: %lf\n", Y[i], meanrainY);
    }

    return 0;
}
