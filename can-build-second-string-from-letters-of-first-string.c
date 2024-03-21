#include <stdio.h>

int main() {
    int count = 0;
    char s1[50], s2[50];
    gets(s1); gets(s2);
    if (strlen(s2) > strlen(s1)) printf("no");
    else {
        for (int i = 0; i < strlen(s2); i++) {
            for (int j = 0; j < strlen(s1); j++) {
                if (s1[j] == s2[i]) {
                    s2[i] = '1';
                    s1[j] = '1';
                    count++;
                    break;
                } 
            }
        }
    }
    printf("%s", count == strlen(s2) ? "yes" : "no");
    return 0;
}
