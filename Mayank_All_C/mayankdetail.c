#include <stdio.h>

int main() {
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}
