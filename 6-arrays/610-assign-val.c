// 6.10 first value to arrays

#include <stdio.h>

#define SIZE 10

void fill_zero();
void first_val();
void assign_even_numbers();

int main() {
  fill_zero();
  printf("------------------------\n");
  first_val();
  printf("------------------------\n");
  assign_even_numbers();

  return 0;
}

void fill_zero() {
  int n[10], i;
  for (i = 0; i <= 9; i++) {
    n[i] = 0;
  }
  printf("%s%13s\n", "Eleman", "Değer");

  for (i = 0; i <= 9; i++) {
    printf("%5d%13d\n", i, n[i]);
  }
}

void first_val() {
  int n[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
  int i;

  printf("%s%13s\n", "Eleman", "Değer");

  for (i = 0; i <= 9; i++) {
    printf("%5d%13d\n", i, n[i]);
  }
}

void assign_even_numbers() {
  int s[SIZE], j;

  for (j = 0; j <= SIZE - 1; j++) {
    s[j] = 2 + 2 * j;
  }

  printf("%s %13s \n", "Item", "Value");

  for (j = 0; j <= SIZE - 1; j++) {
    printf("%7d %13d\n", j, s[j]);
  }
}
