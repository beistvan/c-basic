#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  printf("Mne %d ", k);

  int e = k / 10, m = k % 10;

  switch (m) {
    case 1: printf(e == 1 ? "let" : "god"); break;
    case 2:
    case 3:
    case 4: printf(e == 1 ? "let" : "goda"); break;
    case 0:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9: printf("let"); break;
    default: printf("ERROR!"); break;
  }

  return 0;
}
