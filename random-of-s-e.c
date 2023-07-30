#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int s, e;
    scanf("%d %d", &s, &e);
    srand(time(NULL));
    int rand_digit = rand();
    printf("%d\n", s + rand_digit % (s - e + 1));
    return 0;
}
