#include <stdio.h>
#define MAX_LEN 50

int main() {
  char str1[MAX_LEN], str2[MAX_LEN];
  scanf("%s %s", str1, str2);
  if (strlen(str1) != strlen(str2) || strcmp(str1, str2) != 0)
    printf("no");
  else
    printf("yes");
  return 0;
}
