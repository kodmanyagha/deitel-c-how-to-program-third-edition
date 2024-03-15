// rolling a dice 6000 times.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int yuz, atis;
  int frekans1 = 0;
  int frekans2 = 0;
  int frekans3 = 0;
  int frekans4 = 0;
  int frekans5 = 0;
  int frekans6 = 0;

  for (atis = 1; atis <= 6000; atis++) {
    yuz = 1 + rand() % 6;

    switch (yuz) {
    case 1:
      ++frekans1;
      break;

    case 2:
      ++frekans2;
      break;

    case 3:
      ++frekans3;
      break;

    case 4:
      ++frekans4;
      break;

    case 5:
      ++frekans5;
      break;

    case 6:
      ++frekans6;
      break;
    }
  }

  printf("%s%13s\n", "Yüz", "Frekans");
  printf("1%15d\n", frekans1);
  printf("2%15d\n", frekans2);
  printf("3%15d\n", frekans3);
  printf("4%15d\n", frekans4);
  printf("5%15d\n", frekans5);
  printf("6%15d\n", frekans6);
}
