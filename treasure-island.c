#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  char dir[100]; int st;
  int i = -1, x = 0, y = 0;
  while (++i < n) {
    scanf("%s %d ", dir, &st);
    switch (dir[0]) {
      case 'N': y += st; break;
      case 'S': y -= st; break;
      case 'E': x += st; break;
      case 'W': x -= st; break;
      default: break;
    }
  }
  printf("%d %d", x, y);
  return 0;
}
