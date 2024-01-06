#include <stdio.h>

int main() {
    int op;
    float a, b;
    scanf("%f %f %c", &a, &b, &op);
    
    switch (op) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;      
        case '*': printf("%.2f", a * b); break;
        case '/': {
            if (b == 0) {
                printf("ERROR!\n"); break;
            } else {
                printf("%.2f", a / b); break;
            }
        }
        default: printf("ERROR!\n");
    }
    
    return 0;
}
