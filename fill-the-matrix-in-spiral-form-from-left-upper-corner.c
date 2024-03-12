#include <stdio.h>

int main() {
    int m, n, i, j, k, p; 
    scanf("%d %d", &n, &m);
    int a[10][10];
    i = 0; k = 0; p = 1;
    while (i < n * m)
    {
        for (j = k; j < m - k && i < n * m; j++) {a[k][j] = p++; i++;}
        for (j = k + 1; j < n - k && i < n * m; j++) {a[j][m - k - 1] = p++; i++;}
        for (j = m - k - 2; j >= k && i < n * m; j--) {a[n - k - 1][j] = p++; i++;}
        for (j = n - k - 2; j > k && i < n * m; j--) {a[j][k] = p++; i++;}
        k++;
    }
    for (i = 0; i < n; i++, printf("\n"))
        for (j = 0; j < m; j++)
            printf("%3d", a[i][j]);
    return 0;
}
