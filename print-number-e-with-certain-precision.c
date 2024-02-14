#include <stdio.h>

int main() {
  int k = 0, p = 1;
  double eps, e = 1.0;
  scanf("%lf", &eps);
  while (1.0 / p >= eps)
  {
    p *= ++k;
    e += 1.0 / p;    
  }
  printf("%9.8lf", e);
  return 0;
}
