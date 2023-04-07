#include <stdio.h>
#include <math.h>

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0;
    } else {
        return a / b;
    }
}

// Function to calculate the square root of a number
double square_root(double a) {
    if (a < 0) {
        printf("Error: square root of a negative number\n");
        return 0;
    } else {
        return sqrt(a);
    }
}

// Function to calculate the power m of a number
double power(double a, double m) {
    return pow(a, m);
}

int main() {
    double a, b, result;
    char op;

    printf("Enter the operation you want to perform (+, -, *, /, s, p): ");
    scanf("%c", &op);

    switch (op) {
        case '+':
            printf("Enter the first number: ");
            scanf("%lf", &a);
            printf("Enter the second number: ");
            scanf("%lf", &b);
            result = add(a, b);
            printf("Result: %lf\n", result);
            break;

        case '-':
            printf("Enter the first number: ");
            scanf("%lf", &a);
            printf("Enter the second number: ");
            scanf("%lf", &b);
            result = subtract(a, b);
            printf("Result: %lf\n", result);
            break;

        case '*':
            printf("Enter the first number: ");
            scanf("%lf", &a);
            printf("Enter the second number: ");
            scanf("%lf", &b);
            result = multiply(a, b);
            printf("Result: %lf\n", result);
            break;

        case '/':
            printf("Enter the first number: ");
            scanf("%lf", &a);
            printf("Enter the second number: ");
            scanf("%lf", &b);
            result = divide(a, b);
            printf("Result: %lf\n", result);
            break;

        case 's':
            printf("Enter the number: ");
            scanf("%lf", &a);
            result = square_root(a);
            printf("Result: %lf\n", result);
            break;

        case 'p':
            printf("Enter the number: ");
            scanf("%lf", &a);
            printf("Enter the power: ");
            scanf("%lf", &b);
            result = power(a, b);
            printf("Result: %lf\n", result);
            break;

        default:
            printf("Error: invalid operation\n");
            break;
    }

    return 0;
}
