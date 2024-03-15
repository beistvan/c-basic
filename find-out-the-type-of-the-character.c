#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') printf("en");
    else if (c >= '0' && c <= '9') printf("digit");
    else printf("error");
    return 0;
}
