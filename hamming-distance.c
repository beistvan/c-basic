#include <stdio.h>

int main() {
  char s1[15], s2[15];
  fgets(s1, 15, stdin);
  fflush(stdin);
  fgets(s2, 15, stdin);
  fflush(stdin);
  int i = -1, cnt = 0;
  while (s1[++i])
      if (s1[i] != s2[i]) cnt++;
  printf("%d", cnt);
  return 0;
}
