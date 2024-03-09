#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m]; int s[m];
    for (int j = 0; j < m; s[j++] = 0);
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) {   
            scanf("%d", &a[i][j]);
            s[j] += a[i][j];    
        }
    for (int j = m - 1; j >= 0; j--) 
        printf("%d ", s[j]); 
    return 0;
}
