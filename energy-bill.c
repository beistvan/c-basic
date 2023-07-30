#include <stdio.h>

int main() {
    int a, b;
    double n;
    scanf("%d %d %lf", &a, &b, &n);
    printf("%.2lf", n * (b - a));
    return 0;
}
