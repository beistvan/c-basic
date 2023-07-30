#include <stdio.h>

int main() {
  int a1, a2, a3, a4, a5;
  scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
  printf("%d", 2 * (abs(a1) % 2 + abs(a2) % 2 + abs(a3) % 2 + abs(a4) % 2 + abs(a5) % 2) - 5);
  return 0;
}
