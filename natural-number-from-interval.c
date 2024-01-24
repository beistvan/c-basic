#include <stdio.h>

int main() {
    int k, m;
    scanf("%d %d", &k, &m);
    for (int i = k < 1 ? 1 : k; i <= m; printf("%d ", i++)) { }
    return 0;
}
