// To find the largest of three numbers.

#include <stdio.h>

int maksimum(int, int, int); // function prototype

int main() {
  int a, b, c;

  printf("3 sayı giriniz: ");
  scanf("%d%d%d", &a, &b, &c);
  printf("Maximum: %d dir.\n", maksimum(a, b, c));

  return 0;
}

int maksimum(int x, int y, int z) {
  int maks = x;
  if (y > maks) {
    maks = y;
  }
  if (z > maks) {
    maks = z;
  }

  return maks;
}
