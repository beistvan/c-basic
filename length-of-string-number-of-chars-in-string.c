#include <stdio.h>

int main() {
    char s[30];
    int len = 0;
    fgets(s, 29, stdin);
    while (s[len]) len++;
    printf("%d", len);
    return 0;
}
