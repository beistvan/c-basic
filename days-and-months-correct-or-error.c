#include <stdio.h>

int main() {
  int d, m;
  scanf("%d %d", &d, &m);
  printf("%s", d >= 1 && d <= 28 + (m + m/8) % 2 + 2 % m + 2 * 1/m && m >= 1 && m <= 12 ? "correct" : "error");
  return 0;
}
