#include <stdio.h>

int main() {
  char s[102]; int i = -1;
  fgets(s, 102, stdin);
  while (s[++i]) {
    if (s[i] != ' ') printf("%c", s[i]);
    while (s[i] == ' ' && s[i + 1] == ' ') i++; 
    if (s[i] == ' ' && s[i + 1] != ' ') printf("%c", s[i]);
  }
  return 0;
}
