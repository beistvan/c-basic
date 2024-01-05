#include <stdio.h>

int main() {
  int op, a, b;
  scanf("%c %d %d", &op, &a, &b);
  
  switch (op) {
    case '+': printf("%.2lf", (double)a + b); break;
    case '-': printf("%.2lf", (double)a - b); break;      
    case '*': printf("%.2lf", (double)a * b); break;
    case '/': printf("%.2lf", (double)a / b); break;
    default: printf("ERROR!\n");
  }
  
  return 0;
}
