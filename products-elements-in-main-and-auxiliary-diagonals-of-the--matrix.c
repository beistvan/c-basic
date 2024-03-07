#include <stdio.h>

int main() {
  int n, prmain = 1, praux = 1;
  scanf("%d", &n);
  int a[n][n];
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < n; j++)   
      scanf("%d", &a[i][j]);
  for (int i = 0; i < n; i++) {   
    prmain *= a[i][i];
    praux *= a[i][n - i - 1];
  }
  if (praux > prmain) printf("%d %d", praux, prmain); else printf("%d %d", prmain, praux);
  return 0;
}
