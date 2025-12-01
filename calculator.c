#include <stdio.h>

int main () {
 
    // Calculator for basic arithmetic operations

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");   
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator){
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
            if (num2 == 0) {
                printf("Error! Division by zero.");
                return 1;
            } else {
                result = num1 / num2;
                return 1;
            }
            break;
        default:
            printf("Error! Operator is not correct");
            return 1;
    }

    printf("Result: %.4lf", result);
    return 0;
}