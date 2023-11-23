#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > 0) {
        printf("The first number is positive\n");

        if (num2 > 0) {
            printf("The second number is also positive");
        } else if (num2 < 0) {
            printf("The second number is negative");
        } else {
            printf("The second number is zero");
        }

    } else if (num1 < 0) {
        printf("The first number is negative\n");

        if (num2 > 0) {
            printf("The second number is positive");
        } else if (num2 < 0) {
            printf("The second number is also negative");
        } else {
            printf("The second number is zero");
        }

    } else {
        printf("The first number is zero\n");

        if (num2 > 0) {
            printf("The second number is positive");
        } else if (num2 < 0) {
            printf("The second number is negative");
        } else {
            printf("The second number is also zero");
        }
    }

    return 0;
}