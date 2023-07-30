#include <stdio.h>

int main() {
  double n;
  scanf("%lf", &n);
  printf("%.0lf %.3e", 249.5 * n / 0.05, 249.5 * n / 3e-23);
  return 0;
}
