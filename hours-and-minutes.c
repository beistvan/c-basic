#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  printf("%d %d", k / 3600, (k / 60) % 60);
  return 0;
}
