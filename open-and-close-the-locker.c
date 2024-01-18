#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%s", a == 1 && b == 0 && c == 2 && d == 4 ? "open" : "close");
    return 0;
}
