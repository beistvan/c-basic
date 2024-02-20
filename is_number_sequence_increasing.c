#include <stdio.h>

int main() {
  int n, p;
  scanf("%d", &p);
  do {
    scanf("%d", &n);
    if (n <= p) break;
    p = n;
  } while (n != -9999);
  printf("%s", n == -9999 ? "YES" : "NO");
  return 0;
}
