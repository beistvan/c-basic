#include <stdio.h>

int main() {
  double pi = 3.14159265358979323846;
  double r, h;
  scanf("%lf %lf", &r, &h);
  printf("%.2lf %.2lf", h * pi * r * r, 1.0 / 3.0 * h * pi * r * r);
  return 0;
}
