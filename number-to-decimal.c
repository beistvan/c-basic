#include <stdio.h>

int main() {
  int k, n;
  scanf("%d %d", &k, &n);
  printf("%d", n / 1000 * k * k * k + n / 100 % 10 * k * k + n / 10 % 10 * k + n % 10);
  return 0;
}
