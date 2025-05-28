#include <stdio.h>

int main(){

    int num1 = 0;
    int num2 = 0;
    char operator = '\0';
    int result = 0;

    printf("Enter the first number: ");
    if(scanf("%d", &num1) != 1){
        printf("Invalid Integer, please enter a number.");
        return 1;
    }


    printf("Enter the operator ( + , - , * , / ): ");
    while((operator = getchar()) != '\n' && operator != EOF)

    printf("Enter the second number: ");
    if(scanf("%d", &num2) != 1){
        printf("Invalid Integer, please enter a number.");
        return 1;
    }

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