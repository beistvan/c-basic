#include <stdio.h>

int main() {
  int f, d;
  scanf("%d %d", &f, &d);
  printf("%d'%d\" = %.2lf m", f, d, (f * 12 + d) * 0.0254);
  return 0;
}
