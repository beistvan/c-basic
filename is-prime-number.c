#include <stdio.h>
#include <math.h>

int main() {
    int n, k = 0;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("0");
    else 
    {
        for (int i = 3; i <= sqrt(n); i += 2)        
            if (n % i == 0){
                printf("0");
                return 0;
            }
        printf("1");
    }
    return 0;    
}
