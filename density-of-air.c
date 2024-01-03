#include <stdio.h>

int main() {
  int h;
  scanf("%d", &h);
  printf("%.2lf", 1.29 * exp(-h * 1.25e-4));
  return 0;
}
