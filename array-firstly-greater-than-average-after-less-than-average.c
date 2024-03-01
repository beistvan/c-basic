#include <stdio.h>

int main() {
    int n, s = 0, i = 0;
    double avg = 0.0;
    scanf("%d", &n);
    int a[n];
    while (scanf("%d", a + i) != EOF)
        s += a[i++];
    avg = (double)s / n;
    for (i = 0; i < n; i++)
        if (a[i] > avg) printf("%d ", a[i]);
    for (i = 0; i < n; i++)
        if (a[i] <= avg) printf("%d ", a[i]);
    return 0;
}
