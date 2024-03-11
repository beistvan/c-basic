#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);         
    scanf("%d", &k); 
    for (int i = 0; i < n; i++, printf("\n")) 
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][(j + n - k % n) % n]);
    return 0;
}
