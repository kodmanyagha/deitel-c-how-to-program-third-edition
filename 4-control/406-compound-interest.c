#include <math.h>
#include <stdio.h>

/*
Bir kişi $1000'ını %5 faizle bankaya yatırmıştır. Bütün faizin hesaptaki
paraya eklendiğini düşünerek 10 yıl boyunca her yıl sonunda hesapta birikecek
parayı hesaplayıp yazdırınız. Aşağıdaki formülü kullanın:

  a = p(1 + r) ^ n
  a: n yıl sonra hesapta birikecek miktar
  p: ilk yatırılan miktar
  n: yıl sayısı
  r: faiz oranı
*/

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
