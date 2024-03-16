#include <stdio.h>

int main() {
  int k;
  scanf("%d", &k);
  for (int i = 'Z' - k + 1; i <= 'Z'; i++)
      printf("%c", i);
  return 0;
}
