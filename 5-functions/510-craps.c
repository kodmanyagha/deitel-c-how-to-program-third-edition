// craps game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zarAtma(void);

int main() {
  int oyunDurumu;
  int toplam;
  int oyuncuPuani;

  srand(time(NULL));
  toplam = zarAtma(); // zarın ilk atılışı

  switch (toplam) {
  case 7:
  case 11: // ilk atışta kazanma
    oyunDurumu = 1;
    break;
  case 2:
  case 3:
  case 12: // ilk atışta kaybetme
    oyunDurumu = 2;

  default: // hatırlatma noktası
    oyunDurumu = 0;
    oyuncuPuani = toplam;
    printf("Oyuncunun kazanacağı zar: %d\n", oyuncuPuani);
    break;
  }

  // zar atmaya devam et
  while (oyunDurumu == 0) {
    toplam = zarAtma();

    if (toplam == oyuncuPuani) {
      // kazanılacak zarı atma
      oyunDurumu = 1;
    } else if (toplam == 7) {
      // 7 kaybeder
      oyunDurumu = 2;
    }

    if (oyunDurumu == 1) {
      printf("Oyuncu kazanır\n");
    } else {
      printf("Oyuncu kaybeder\n");
    }
  }
  return 0;
}

int zarAtma(void) {
  int zar1, zar2, toplamZar;

  zar1 = 1 + (rand() % 6);
  zar2 = 1 + (rand() % 6);
  toplamZar = zar1 + zar2;

  printf("Oyuncu %d + %d = %d attı\n", zar1, zar2, toplamZar);

  return toplamZar;
}
