#include <stdio.h>

int main() {
    char s[20]; int i = -1, n = 0;
    fgets(s,20,stdin);
    while (s[++i]&&s[i]>='0'&&s[i]<='9')
      n = (s[i] - '0') + n * 2;
    printf("%d", n);
    return 0;
}
