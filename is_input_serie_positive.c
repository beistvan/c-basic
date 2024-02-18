#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == -9999)
        printf("NO");
    else
    {
        while (n != -9999)
        {            
            if (n < 0)
                break;
            scanf("%d", &n);
        }
        printf("%s", n == -9999 ? "YES" : "NO");
    }
    return 0;
}
