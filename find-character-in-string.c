#include <stdio.h>

int main() {
    char str[102], c;
    scanf("%c ", &c);
    fgets(str, 100, stdin);
    int i = 0;
    while (str[i] && str[i] != c) i++;
    printf("%d", !str[i] ? -1 : i);
    return 0;
}
