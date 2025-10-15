/* Harf notlarının sayılması */
#include <stdio.h>

int main() {
  int input;
  int aSay = 0;
  int bSay = 0;
  int cSay = 0;
  int dSay = 0;
  int fSay = 0;

  printf("Harf notlarını girin.\n");
  printf("Çıkış için 'q' karakterini girin.\n");

  while ((input = getchar()) != 'q') {
    switch (input) {
    case 'A':
    case 'a':
      ++aSay;
      break;

    case 'B':
    case 'b':
      ++bSay;
      break;

    case 'C':
    case 'c':
      ++cSay;
      break;

    case 'D':
    case 'd':
      ++dSay;
      break;

    case 'F':
    case 'f':
      ++fSay;
      break;

    case '\n':
      break;

    default:
      printf("Yanlış harf girildi.\n");
      printf("Lütfen yeni bir not girin.\n");
      break;
    }
  }

  printf("\nHer harf notu için toplam:\n");
  printf("A: %d\n", aSay);
  printf("B: %d\n", bSay);
  printf("C: %d\n", cSay);
  printf("D: %d\n", dSay);
  printf("F: %d\n", fSay);

  return 0;
}
