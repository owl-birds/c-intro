#include <stdio.h>

//calculator
int main()
{
    double num1, num2, res;
    char operator1;
    printf("type your expression:: ");
    scanf("%lf %c %lf", &num1, &operator1, &num2);


    switch (operator1)
    {
    case '+':
        res = num1 + num2;
    break;
    case '-':
        res = num1 - num2;
    break;
    case '*':
        res = num1 * num2;
    break;
    case '/':
        if (num2 == 0){
            printf("division by zero");
        }
        else{
            res = num1 / num2;
        }
    break;
    default:
        printf("invalid input");
    break;
    }
    printf("\n\n\nthe result:: %lf", res);



    return 0;
}
