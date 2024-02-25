#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];
    for (int i = n - 1; scanf("%d", &k) && i >= 0; i--)
        a[i] = k;
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
