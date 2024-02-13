#include <stdio.h>
#include <math.h> 

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; pow(2, i) < n; i++);
    printf("%d ", i);
    return 0;
}
