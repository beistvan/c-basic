#include <stdio.h>
#include <math.h>

int main() {
  double a, b, g;
  scanf("%lf %lf %lf", &a, &b, &g);
  printf("%.2lf", a * b * sin((g / 180) * 3.141593) / 2);
  return 0;
}
