#include <stdio.h>

int main() {
    int n, min = 2147483647, max = -2147483647;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; scanf("%d", &a[i]) && i < n; i++)
    {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    for (int i = 0; i < n; i++)
        if (a[i] == min) printf("%d ", max);
        else if (a[i] == max) printf("%d ", min);
        else printf("%d ", a[i]);
    return 0;
}
