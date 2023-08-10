#include <stdio.h>

int main() {
  int k, m, n;
  scanf("%d %d %d", &k, &m, &n);
  printf("%d %d", m % k, n % k);
}
