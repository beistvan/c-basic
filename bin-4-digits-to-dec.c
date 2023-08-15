#include <stdio.h>

int main() {
  int b;
  scanf("%d", &b);
  printf("%d", b / 1000 * 2 * 2 * 2 + b / 100 % 10 * 2 * 2 + b / 10 % 10 * 2 + b % 10);
  return 0;
}
