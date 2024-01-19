#include <stdio.h>

int main() {
  int m;
  scanf("%d", &m);
  printf("%d", m > 500 ? (m - 500) * 2 + 350 : 350);
  return 0;
}
