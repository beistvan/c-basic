#include <stdio.h>

int main() {
    char s[52];
    while (scanf("%s ", s) == 1)
        if (s[0] == s[strlen(s) - 1])
            printf("%s ", s);
    return 0;
}
