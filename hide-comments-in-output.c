#include <stdio.h>

int main() {
    char s[102];
    fgets(s, 102, stdin);
    int i = -1, fb = 0, b = -1, e = -1;
    while(s[++i]) {
        if(fb == 0 && s[i] == '/' && s[i + 1] == '*') {b = i; fb = 1;}
        if(s[i] == '*' && s[i + 1] == '/') e = i + 1;
    }
    if (b == -1 || e == -1 || e - b < 3) printf("%s", s);
    else {
        i = -1;
        while (s[++i])
            if (i < b || i > e) printf("%c", s[i]);
    }
    return 0;
}
