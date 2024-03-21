#include <stdio.h>
#include <string.h>

int main() {
    char s[42];
    while (scanf("%s ", s) == 1) {
        int i = 0;
        int j = strlen(s) - 1;
        while (i < j) {
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            i++;
            j--;
        }
        printf("%s ", s);
    }
    return 0;
}
