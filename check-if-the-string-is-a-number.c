#include <stdio.h>

int main() {
    char s[10];
    fgets(s, 22, stdin);
    int i = 0;
    if (s[i] >= '0' && s[i] <= '9' || s[i] == '-') {
        if (s[i] == '-' ) i++;
        if (s[i] >= '0' && s[i] <= '9' && s[i] && s[i] != '\n') {
            while (s[i] >= '0' && s[i] <= '9') i++;
            if (s[i] == '\0' || s[i] == '\n') {printf ("int"); return 0;}
            if (s[i] == '.' ) i++;
            if (s[i] >= '0' && s[i] <= '9') {
                while (s[i] >= '0' && s[i] <= '9') i++;
                if (s[i] == '\0' || s[i] == '\n') {printf ("float"); return 0;}
            };            
        }
    }
    printf("error");
    return 0;
}
