// 5.09 Randomly rolling the dice.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  unsigned besleme;

  printf("Beslemeyi girin: ");
  scanf("%u", &besleme);
  srand(besleme);

  for (i = 1; i <= 10; i++) {
    printf("%10d", 1 + (rand() % 6));

    if (i % 5 == 0) {
      printf("\n");
    }
  }

  return 0;
}
