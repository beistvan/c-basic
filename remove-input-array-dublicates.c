#include <stdio.h>

int main() {
    int n, k, p;
    scanf("%d %d", &n, &k);
    printf("%d ", k);
    p = k;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &k);
        if (k != p) printf("%d ", k);
        p = k;
    }
    return 0;
}
