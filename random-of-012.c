#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int rand_digit = rand();
    printf("%d\n",rand_digit % 3);
    return 0;
}
