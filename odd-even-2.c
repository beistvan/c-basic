#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  printf("%d", 1 - abs(k) % 2 * 2);
  return 0;
}
