#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++)
        if (a[i] != a[n - 1 - i]) break;
    printf("%s", i == n / 2 ? "YES" : "NO");
    return 0;
}
