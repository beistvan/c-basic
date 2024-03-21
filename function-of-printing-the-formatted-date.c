#include <stdio.h>

void print_date(int d, int m, int y, int k){
    if (k == 0) printf("%02d.%02d.%02d", d, m, y % 100);
    if (k == 1) printf("%02d.%02d.%4d", d, m, y);
    if (k == 2) printf("%4d/%02d/%02d", y, m, d);
}

int main(){ 
    int d, m, y, k;
    scanf("%d %d %d %d", &d, &m, &y, &k);
    print_date(d, m, y, k);
    return 0;
}
