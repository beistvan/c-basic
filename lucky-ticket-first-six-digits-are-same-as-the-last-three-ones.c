#include <stdio.h>

int main() {
  unsigned int n1,n2,n3,n4,n5,n6;
  scanf("%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6);
  printf("%s", n1+n2+n3==n4+n5+n6 ? "yes" : "no");
  return 0;
}
