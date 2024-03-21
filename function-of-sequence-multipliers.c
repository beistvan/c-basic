#include<stdio.h>
int sequence_multipliers(int k){
    if (k == 1 || k == 0) return -1;
    int n = 0;
    while (k != n * (n + 1) * (n + 2) && n <= k) n++;
    return k % n ? -1 : n;
}
int main(void){
    int n;
    scanf("%d", &n),
    printf("%d", sequence_multipliers(n));
    return 0;
}
