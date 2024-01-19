#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = a * 100 + b * 10 + c;
    printf("%s", d == 248 || d == 284 || d == 428 || d == 482 || d == 824 || d == 842 ? "open" : "closed");
    return 0;
}
