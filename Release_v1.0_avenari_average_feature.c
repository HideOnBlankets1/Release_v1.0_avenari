#include <stdio.h>
#include <math.h>

double addition(double x, double y) {
    return x + y;
}

double subtraction(double x, double y) {
    return x - y;
}

double multiplication(double x, double y) {
    return x * y;
}

double division(double x, double y) {
    return x / y;
}

double square_root(double x) {
    return sqrt(x);
}

double power(double x, double m) {
    return pow(x, m);
}

double calculate_average() {
    double sum = 0.0;
    double count = 0.0;
    double num;

    printf("Enter numbers to calculate the average (press 'a' to calculate): ");
    while (scanf("%lf", &num) == 1) {
        sum += num;
        count++;
    }

    if (count == 0) {
        printf("No numbers entered.\n");
        return 0.0;
    }

    double average = sum / count;
    printf("Average: %lf\n", average);

    return average;
}

int main() {
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /, s, p, a): ");
    scanf("%c", &operator);

    switch (operator) {
        case '+':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Sum = %lf\n", addition(num1, num2));
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Difference = %lf\n", subtraction(num1, num2));
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Product = %lf\n", multiplication(num1, num2));
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Quotient = %lf\n", division(num1, num2));
            break;
        case 's':
            printf("Enter a number: ");
            scanf("%lf", &num1);
            printf("Square root = %lf\n", square_root(num1));
            break;
        case 'p':
            printf("Enter a number and power: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %lf\n", power(num1, num2));
            break;
        case 'a':
            calculate_average();
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
