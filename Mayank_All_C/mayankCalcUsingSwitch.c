#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Enter the operator:\n");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            printf("The sum of a and b is %d\n", a + b);
            break;
        case '-':
            printf("The difference of a and b is %d\n", a - b);
            break;
        case '*':
            printf("The product of a and b is %d\n", a * b);
            break;
        case '/':
            printf("The division of a and b is %d\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}