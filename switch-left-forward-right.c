#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "");
  char s;
  scanf("%c",&s);

  switch (s) {
    case 'l' : printf("Left.\n"); break;
    case 'f' : printf("Forward.\n"); break;
    case 'r' : printf("Right.\n"); break;
    default  : break;
  }

  return 0;
}
