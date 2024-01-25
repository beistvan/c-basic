#include <stdio.h>

int main() {
    int k, f = 1;
    scanf("%d", &k);
    if (k > 0) {
        for (int i = 2; i <= k; f *= i++); 
    }
    printf("%d ", f);
    return 0;
}
