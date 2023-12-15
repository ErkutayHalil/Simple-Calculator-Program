#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t\t\t[CALCULATOR]\n");
    printf("\n\n\n");
    
    char operator;
    double number1,number2,result;

    printf("Enter an operator (+,-,*,/): ");
    scanf("%c",&operator);
    printf("\n");

    printf("Enter the first number: ");
    scanf("%lf",&number1);
    printf("\n");

    printf("Enter the second number: ");
    scanf("%lf",&number2);
    printf("\n");

    switch(operator)
    {
        case '+':
            result = number1 + number2;
            printf("Result = %.3lf",result);
            break;

        case '-':
            result = number1 - number2;
            printf("Result = %.3lf",result);
            break;

        case '*':
            result = number1 * number2;
            printf("Result = %.3lf",result);
            break;

        case '/':
            result = number1 / number2;
            printf("Result = %.3lf",result);
            break;

        default :
        printf("%c is not valid",operator);

    }

    return 0;

}