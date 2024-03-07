#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i++ < n; printf("\n"))
        for (int j = 0; j++ < n; printf("%d ", abs(i - j) + 1));  
    return 0;
}
