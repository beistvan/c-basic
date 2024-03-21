#include <stdio.h>
#define STR_LEN 50

int main() {
    char str1[STR_LEN], str2[STR_LEN];
    gets(str1); gets(str2);
    if (strcasecmp(str1, str2))
        printf("no");
    else
        printf("yes");
    return 0;
}