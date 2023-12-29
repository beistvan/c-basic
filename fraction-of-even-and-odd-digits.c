#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  printf("%.2lf", (double) ((a / 1000) * (a % 100 / 10)) / ((a % 1000 / 100) * (a % 10)));
  return 0;
}
