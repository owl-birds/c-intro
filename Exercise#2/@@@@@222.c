#include <stdio.h>

int main()
{
   _Bool t = 1;
   _Bool f = 0;
   _Bool result1, result2;

   result1= t && f;
   printf("Result 1:: %i", result1);
   result2 = t || f;
   printf("\nsult 2:: %i", result2);

   return 0;
}
