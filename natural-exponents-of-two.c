#include <stdio.h>
#include <math.h> 

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= log2(n); i++)
      printf("%d ", i);
  return 0;
}
