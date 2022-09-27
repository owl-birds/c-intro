#include <stdio.h>

int main()
{
    int prime[50];
    int i,j,c,idx;

    idx = 0;
    for (i = 1; i < 100; i += 1)
    {
        c = 0;
        j = 0;
        while (j <= (i))
        {
            j += 1;
            if (i % j == 0)
            {c += 1;}
            if (c > 2)
                break;
        }
        if (c == 2)
        {
            //printf("%i\n", i);
            prime[idx] = i;
            idx += 1;
        }

    }
    for (int a = 0; a < idx; a++)
    {
        printf("%i\n", prime[a]);
    }





    return 0;
}
