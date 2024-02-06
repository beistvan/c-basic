#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) != EOF && n != -9999)
      printf("%d ", n);
  return 0;
}
