#include <stdio.h>

// Prototype of the function
int kare(int);

int main() {
  int x;
  for (x = 1; x <= 10; x++) {
    printf("%d ", kare(x));
  }

  printf("\n");
  return 0;
}

// Implementation of the function
int kare(int y) { return y * y; }
