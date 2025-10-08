#include <math.h>
#include <stdio.h>

int main() {
  int yil;
  double miktar, anapara = 1000.0, oran = .05;

  printf("%4s%21s\n", "Yıl", "Depozito Miktarı");

  for (yil = 1; yil <= 10; yil++) {
    miktar = anapara * pow(1.0 + oran, yil);
    printf("%3d%21.2f\n", yil, miktar);
  }

  return 0;
}
