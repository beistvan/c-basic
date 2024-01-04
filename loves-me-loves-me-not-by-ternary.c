#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    printf("%s", k % 2 ? "loves me" : "he loves me not");
    return 0;
}
