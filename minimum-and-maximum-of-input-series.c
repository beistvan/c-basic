#include <stdio.h>

int main() {
    int n, M = -999999, m = 1000000;
    while (scanf("%d", &n) != EOF && n != 0)
    {
        if (n < m)
            m = n;
        if (n > M)
            M = n;
    }
    printf("%d %d", M, m);
    return 0;
}
