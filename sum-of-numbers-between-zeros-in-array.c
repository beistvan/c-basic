#include <stdio.h>

int main() {
  int n, s = 0;
  while(scanf("%d", &n) && n != 0);
  while(scanf("%d", &n) && n != 0) s += n;
  printf("%d", s);
  return 0;
}
