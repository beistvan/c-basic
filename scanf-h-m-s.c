#include <stdio.h>
int main(void){

  int h;
  int m;
  int s;

  scanf("%d",&h);
  scanf("%d",&m);
  scanf("%d",&s);

  s = h * 60 * 60 + m * 60 + s;

  printf("%d\n", s);

  return 0;
}
