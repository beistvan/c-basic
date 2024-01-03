#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  printf("%.2lf", 75 * exp(-log(2) / 5570 * k));
  return 0;
}
