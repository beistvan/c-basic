#include <stdio.h>

int main() {
  int y1, y2, y3, y4, k;
  scanf("%d %d %d %d %d %d", &k, &y1, &y2, &y3, &y4);
  printf("%d %d %d %d", (y1 + k) % 26, (y2 + k) % 26, (y3 + k) % 26, (y4 + k) % 26);
  return 0;
}
