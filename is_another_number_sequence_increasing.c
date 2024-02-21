#include <stdio.h>

int main() {
  int n, p, k = 1;
  scanf("%d", &p);
  do {
    scanf("%d", &n);
    k++;
    if (n <= p) break;
    p = n;
  } while (n != -9999);
  printf("%d", n == -9999 ? 0 : k);
  return 0;
}
