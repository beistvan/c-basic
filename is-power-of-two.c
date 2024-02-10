#include <stdio.h>
#include <math.h> 

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", (int)(log(n) / log(2)) - log(n) / log(2) == 0 ? "YES" : "NO");
    return 0;
}
