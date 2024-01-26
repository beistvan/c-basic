#include <stdio.h>

int main() {
    int n;
    long long f = 1, f1 = 1, f2 = 1;
    scanf("%d", &n);
    
    for (int i = 3; i <= n; f = f1 + f2, f1 = f2, f2 = f, i++); 
    
    printf("%lld ", f);
    return 0;
}
