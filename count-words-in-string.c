#include <stdio.h>

int main() {
    char str[102];
    fgets(str, 102, stdin);
    int i = -1, n = 0;
    while (str[++i])
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i] == '\0')) n++;
    printf("%d", n);
    return 0;
}
