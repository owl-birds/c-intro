#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Smultiples3_5(int n);
int S_Ev_fibonNum(int n);
int LargestPfactors(int n);
int primeC(int n);
int palindrome(char *str, int n);
int L_Pal_2Dnum(int num1, int num2);
void LcollSeq(int n);
int sumDiv(int num);
int amicableNum(int num);
void AmicNumbers(int limit);
void perfNum(int limit);
void defiNum(int limit);
void abunNum(int limit);
void factors(int n, int fact[], int *idx);

int main()
{
    printf("sum multiplies 3 or 5 below 1000 :: %i\n", Smultiples3_5(1000));
    printf("sum Even fibon num less than 10: %i\n", S_Ev_fibonNum(10));
    printf("1 is prime: %i\n", primeC(1));
    printf("Largest prime factors of 81: %i\n", LargestPfactors(81));

    char str[100];
    int num = 2000;
    itoa(num, str, 10);
    printf("%i\n", strlen(str));
    char str1[10] = "racecar";
    printf("\n%i\n", palindrome(str1, strlen(str1)));

    LcollSeq(100);
    printf("\n");

    printf("\n%i\n", sumDiv(220));
    printf("\n%i\n", sumDiv(284));
    printf("\n%i\n", sumDiv(496));
    printf("\n%i\n", sumDiv(28));

    printf("\n284 is a amicable num: %i\n", amicableNum(284));

    printf("\n");
    AmicNumbers(1000);
    printf("\n");
    printf("\n");
    perfNum(1000);
    printf("\n");
    printf("\n");
    defiNum(20);
    printf("\n");
    printf("\n");
    abunNum(20);
    printf("\n");

    int fact1[50];
    int idx1 = 0;
    factors(100 ,fact1,&idx1);

    printf("\n");
    for (int i = 0; i < idx1; i+=1)
        printf("%i ", fact1[i]);
    printf("\n");



    return 0;
}

int sumDiv(int num)
{
    int res = 0;
    for (int i = 1; i <= num/2; i += 1)
    {
        if (num % i == 0)
        {
            res += i;
        }
    }
    return res;
}

int palindrome(char *str, int n)
{
    int i = 0;
    int j = n - 1;
    int c = 0;
    for (;i < n; i += 1)
    {
        if (str[i] == str[j])
            c += 1;
        else
            break;
        j -= 1;
    }
    if (c == n)
        return 1;
    else
        return 0;
}

int primeC(int n)
{
    int c = 1;
    if (n == 1)
        return 0;
    for (int i = 2; i <= (n/2); i += 1)
    {
        if (n % i == 0)
            c += 1;
    }
    if (c == 1)
        return 1;
    else
        return 0;
}

int Smultiples3_5(int n)
{
    int res = 0;
    for(int i = 2; i < n; i += 1)
    {
        //printf("%i ",res);
        if ((i % 3 == 0) || (i % 5 == 0))
            res += i;
    }
    return res;
}

int S_Ev_fibonNum(int n)
{
    int res = 2;
    int f1 = 1;
    int f2 = 2;
    int temp;
    for (int i = 2; i < n; i += 1)
    {
        temp = f1 + f2;
        //printf("%i ", temp);
        if (temp % 2 == 0)
            res += temp;
        f1 = f2;
        f2 = temp;
    }
    return res;
}

int LargestPfactors(int n)
{
    if (primeC(n) == 1)
        return n;
    for (int i = n/2; i >= 2;i -= 1)
    {
        if (primeC(i) == 1 && n % i == 0)
            return i;
    }
    return 0;
}

int L_Pal_2Dnum(int num1, int num2)
{
    int res = 0;
}

void LcollSeq(int n)
{
    int temp = n;
    printf("%i ", temp);
    while (1)
    {
        if (temp == 1)
            return;
        if (temp % 2 == 0)
        {
            temp = temp/2;
            printf("%i ", temp);
        }
        else
        {
            temp = temp*3 + 1;
            printf("%i ", temp);
        }
    }
    return;
}

int amicableNum(int num)
{
    if (sumDiv(sumDiv(num)) == num)
        return 1;
    else
        return 0;
}

void AmicNumbers(int limit)
{
    for (int i = 1; i <= limit; i += 1)
    {
        if (amicableNum(i) == 1)
            printf("%i ", i);
    }
}

void perfNum(int limit)
{
    for (int i = 1; i <= limit; i += 1)
    {
        if (sumDiv(i) == i)
        {
            printf("%i ", i);
        }
    }
    return;
}

void defiNum(int limit)
{
    for (int i = 1; i <= limit; i += 1)
    {
        if (sumDiv(i) < i)
            printf("%i ", i);
    }
    return;
}

void abunNum(int limit)
{
    for (int i = 1; i <= limit; i += 1)
    {
        if (sumDiv(i) >= i)
            printf("%i ", i);
    }
    return;
}

void factors(int n, int fact[], int *idx)
{
    for (int i = 1; i <= n/2; i += 1)
    {
        if (n % i == 0)
        {
            fact[*idx] = i;
            *idx += 1;
            //printf("%i ", i);
        }
    }
}

