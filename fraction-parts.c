#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d %d", a / b % 10, a * 10 / b % 10);
  return 0;
}
