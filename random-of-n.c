#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int n;
    scanf("%d", &n);
    srand(time(NULL));
    int rand_digit = rand();
    printf("%d\n",rand_digit % (n + 1));
    return 0;
}
