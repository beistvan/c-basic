#include <stdio.h>

int main() {
    int n, m, k, min, max, i, j;
    scanf("%d %d", &n, &m);
    int a[n][m]; int s[m];
    for (j = 0; j < m; s[j++] = 0);
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) {   
            scanf("%d", &a[i][j]);
            s[j] += a[i][j];    
        }
    min = max = 0;
    for (j = 1; j < m; j++) {
        if (s[j] < s[min]) min = j;
        if (s[j] > s[max]) max = j;
    }
    for (i = 0; i < n; i++) {
        int tmp = a[i][min];
        a[i][min] = a[i][max];
        a[i][max] = tmp;
    }
    for (i = 0; i < n; i++, printf("\n")) 
        for (j = 0; j < m; j++)   
            printf("%i ",  a[i][j]);
    return 0;
}
