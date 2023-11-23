#include <stdio.h>

int main() {
    int arr[2][3];

    printf("Enter the values of the array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The values of the array are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}