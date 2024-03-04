#include <stdio.h>

int main() {
  int n, m, k;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          scanf("%d", &k);
          printf("%d ", k);
      }
      printf("\n");
  }
  return 0;
}
