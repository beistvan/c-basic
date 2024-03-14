#include <stdio.h>

int main() {
    int n;
    char c;
    int a[26] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &c);
        if (c >= 'A' && c <= 'Z') a[c - 65]++;
        if (c >= 'a' && c <= 'z') a[c - 97]++;
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", a[i]);
    return 0;
}
