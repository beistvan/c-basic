#include <stdio.h>

int main() {
    int k, x;
    scanf("%d %d", &k, &x);
    switch (k) {
        case 1: printf("%d", x); break;
        case 2: printf("%d", (x / 10) * (x % 10)); break;
        case 3: printf("%d", (x / 100) * (x % 100 / 10) * (x % 10)); break;
        case 4: printf("%d", (x / 1000) * (x % 1000 / 100) * (x % 100 / 10) * (x % 10)); break;
        default: printf("ERROR!"); break;
    }
    return 0;
}
