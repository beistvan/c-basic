#include <stdio.h>

int main() {
  int n, f = 0;
  while (n != -9999) {
    scanf("%d", &n);
    if (f == 1 && n != -9999) printf("%d ", n); 
    if (n == 2517) f = 1;
  }
  return 0;
}
