#include <stdio.h>

int main(void) {

  int a = 0, b = 0;
  int * p_1 = &a;
  int * p_2 = &b;
  int c = 0, d = 0;
  scanf("%d %d",&c,&d);
  
  *p_1 = c;
  *p_2 = d;

  printf("%d %d",*p_1, *p_2);

  return 0;
}
