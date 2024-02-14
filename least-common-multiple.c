#include <stdio.h>

int main() {
    int a, b, p;
    scanf("%d %d", &a, &b);
    p = a * b;
    while (a != 0 && b != 0)    
        if (a > b)
            a = a % b;
        else
            b = b % a;
    printf("%d", p / (a + b));
    return 0;
}
