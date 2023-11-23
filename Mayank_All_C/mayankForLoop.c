#include<stdio.h>

int main() {
  for (int i = 1; i <= 5; i = i + 1) {
    printf("Hello world\n");
  }
  for (int i = 10; i >= 1; i = i - 1) {
    printf("%d\n", i);
  }
  return 0;
}