#include <stdio.h>

int main() {
    int n, sa = 0, sb = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)   
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) { 
            if (i < j) sb += a[i][j];
            if (i > n - j -1) sa += a[i][j];
        }
    if (sa < sb) printf("%d %d", sa, sb); else printf("%d %d", sb, sa);
    return 0;
}
