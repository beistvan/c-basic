#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", k % 10 * 100 + k / 10);
    return 0;
}
