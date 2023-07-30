#include <stdio.h>
int main() {
  double r1, r2;
  scanf("%lf %lf", &r1, &r2);
  printf("%.0lf %.2lf", r2 - r1, 3.14159265358979323846 * (r2 * r2 - r1 * r1) * 100);
  return 0;
}
