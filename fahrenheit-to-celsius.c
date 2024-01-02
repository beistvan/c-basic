#include <stdio.h>

int main() {
  int f;
  scanf("%d", &f);
  printf("%.2lf", (f - 32) * 5.0 / 9);
}
