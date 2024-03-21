#include <stdio.h>

int factorial(int k){
    return k ? k * factorial(k - 1) : 1;
}

int main(void){
    int k;
    scanf("%d", &k);
    printf("%d\n", factorial(k));
    return 0;
}
