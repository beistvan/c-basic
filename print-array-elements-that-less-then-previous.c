#include <stdio.h>

int main() {
    int n, f = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        if (a[i] < a[n - 1]) {printf("%d ", a[i]); f = 1;}
    if (f == 0) printf("0");
    return 0;
}
