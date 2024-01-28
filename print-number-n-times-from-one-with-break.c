#include <stdio.h>

int main() {
    int a, b, k = 1;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++) {
        if (k <= b - a + 1) k++; else break;
        for (int j = 1; j < k; j++)
            printf("%5d", i);
    }
    
    return 0;
}
