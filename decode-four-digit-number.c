#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
  printf("%d%d%d%d", (c + 3) % 10, (d + 3) % 10, (a + 3) % 10, (b + 3) % 10);
  return 0;
}
