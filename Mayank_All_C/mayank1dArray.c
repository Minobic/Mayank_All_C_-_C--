#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter the values of the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The values of the array are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}