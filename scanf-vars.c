#include <stdio.h>
int main(void) {
  int a, b, res;
  scanf("%d %d", &a, &b);
  //a = 10;
  //b = 7;

  res = a + b;

  int c;
  scanf("%d", &c);
  //c = 2;
  res = res - c;

  printf("%d\n", res);
  return 0;
}
