#include <stdio.h>

int main(void) {

  int k;
  scanf("%d",&k);

  switch (k) {
    case 1: printf("bad"); break;
    case 2: printf("fail"); break;
    case 3: printf("sufficient"); break;
    case 4: printf("good"); break;
    case 5: printf("excellent"); break;
    default: printf("ERROR!\n");
  }

  return 0;
}
