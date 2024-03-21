int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

int factorial(int k){
    int f = 1;
    for (int i = 2; i <= k; i++)
        f *= i;
    return f;
}
