// 6.10 first value to arrays

#include <stdio.h>

void fill_zero();
void first_val();

int main() {
  fill_zero();
  printf("------------------------\n");
  first_val();

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
