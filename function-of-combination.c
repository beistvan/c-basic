#include<stdio.h>

int factorial(int p) {
    int f = 1;
    for (int i = 2; i <= p; i++)
        f *= i;
    return f;
}

int combin(int n, int k) {
    return factorial(n) / (factorial(k) * (factorial(n - k)));
}

int main(void) {
    int n = 0, k = 0;
    scanf("%d%d",&n,&k);

    printf("%d",combin(n,k));

    return 0;
}
