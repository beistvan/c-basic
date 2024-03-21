#include <stdio.h>

int main() {
  char s[10], r[10];
  fgets(s, 10, stdin);
  int n = strlen(s), j = 0; 
  n = s[n - 1] == '\n' ? n - 1 : n; r[j++] = '\0';
  for (int i = n - 1, k = 1; i >= 0; i--, k++) {
      r[j++] = s[i];
      if (!(k % 3)) r[j++] = ' ';
  }
  if (r[j - 1] == ' ') j--;
  while (r[--j]) printf("%c", r[j]);
  return 0;
}
