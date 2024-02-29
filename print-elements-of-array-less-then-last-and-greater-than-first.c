#include <stdio.h>

int main() {
    int n, f = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        if (a[i] < a[n - 1] && a[i] > a[0]) {printf("%d ", a[i]); f = 0;}
    if (f) printf("0");
    return 0;
}
