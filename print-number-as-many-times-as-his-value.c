#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++)
        for (int j = 1; j <= i; j++)
            printf("%4d", i);
    
    return 0;
}
