#include <stdio.h>

int main() {
  unsigned long long int n; int k;
  scanf("%llu", &n);
  for (k = 1; n / 10 != 0; k++, n /= 10);
  printf("%d", k);
  return 0;
}
