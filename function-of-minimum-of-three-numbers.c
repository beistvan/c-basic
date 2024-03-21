#include<stdio.h>

int min(int a, int b, int c) {
    a = a < b ? a : b;
    return a < c ? a : c;
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min(a, b, c));
    return 0;
}
