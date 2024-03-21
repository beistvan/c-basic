#include <stdio.h>

int main() {
  char name[26], ext[4];
  gets(name); gets(ext);
  printf("%s.%s", name, ext);
  return 0;
}
