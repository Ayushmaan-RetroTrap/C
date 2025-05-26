#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    char operator = '\0';
    int result = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operator ( + , - , * , / ): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Enter the correct operator");
        return 1;
    }

    printf("The result is: %d", result);

    return 0;
}