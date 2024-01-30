#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++)
        for (int j = a; j <= i; j++)
            printf("%5d", i);
    
    return 0;
}
