#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10
#define max2 5

int fact(int n);
int comb(int a, int b);
int Bconvert(int n);
void PrCheck(int n);
int LCM(int a, int b);
void even(int a, int b);
void Mmatrix(int mat1[max][max], int mat2[max][max]);
void PalinW(char wordPal[], int index);
int pow(int b, int p);
void copyS(char word1[], char word2[]);
void findNum(int n[max], int a);

int main()
{
    char wordPal[5],word2[5];
    int Lnum[max2] = {1,2,53,12,56};
    printf("factorial of 5:: %i\n", fact(5));
    printf("combination 5 to 1:: %i\n", comb(5, 1));
    printf("%d\n", Bconvert(2));
    PrCheck(29);
    printf("\n%i \n", LCM(4, 9));
    printf("even num in range 1 to 10 :: "); even(1,10);
    printf("\n\n\n");


    printf("Input  a word to check for palindrome : ");
    scanf("%s", wordPal);
    PalinW(wordPal, 0);

    printf("\nthe 2 power 3:: %i\n", pow(2,3));
    copyS(wordPal, word2);
    printf("\n\n");
    findNum(Lnum, 13);
    return 0;
}

int fact(int n)
{
    static int res = 0;
    if (n == 0)
        return 1;
    res = n * fact(n-1);
    return res;
}

int comb(int a, int b)
{
    return fact(a)/(fact(a-b)*fact(b));
}

int Bconvert(int n)
{
    static int bin = 0,r = 0,factor = 1;
    if (n != 0)
    {
        r = n % 2;
        bin = bin + r * factor;
        factor *= 10;
        Bconvert(n/2);
    }
    return bin;
}

void PrCheck(int n)
{
    static int i = 2, c = 0;
    if (i == n)
    {
        if (c == 0)
        {
            printf("%i is a prime num", n);
            return;
        }
        else
        {
            printf("%i is not a prime num", n);
            return;
        }
    }
    if (n % i == 0)
        c += 1;
    i += 1;
    PrCheck(n);
}

int LCM(int a, int b)
{
    static int res = 0;
    res += a;
    if ((res % a == 0) && (res % b == 0))
        return res;
    else
        LCM(a, b);
}

void even(int a, int b)
{
    if (a % 2 == 0)
        printf("%i ", a);
    if (a == b)
        return;
    a += 1;
    even(a, b);

}

//not completed yet
void Mmatrix(int mat1[max][max], int mat2[max][max])
{
    static int i = 0, j = 0,p = 0, sum;


}

void PalinW(char wordPal[], int index)
{
    int len = strlen(wordPal) - (index + 1);
    if (wordPal[index] == wordPal[len])
    {
        if (index + 1 == len || index == len)
        {
            printf(" The entered word is a palindrome.\n\n");
            return;
        }
        PalinW(wordPal, index + 1);
    }
    else
    {
        printf(" The entered word is not a palindrome.\n\n");
    }
}

int pow(int b, int p)
{
    static int res = 1;
    if (p == 0)
        return res;
    res = res * b;
    pow(b, p-1);
}

void copyS(char word1[], char word2[])
{
    int i = strlen(word1) - 1;
    static int j = 0;
    word2[j] = word1[j];
    if (j == i)
    {
        printf("copied word:: %s", word2);
        return;
    }
    j += 1;
    copyS(word1, word2);
}

void findNum(int n[max2], int a)
{
    static int i = 0;
    if (i == max2)
    {
        printf("%i is not in the array", a);
        return;
    }
    if (a == n[i])
    {
        printf("%i is in the array", a);
        return;
    }
    i+=1;
    findNum(n, a);
}
