#include <stdio.h>

int main() {
    int n, s = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; scanf("%d", &a[i]) && i < n; i++)
       s += a[i];
    printf("%.2lf", (double)s / n);
    return 0;
}
