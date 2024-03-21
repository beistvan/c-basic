#include <stdio.h>

void square(int x, char c){
    for (int i = 0; i++ < x; printf("\n"))
        for (int j = 0; j++ < x; printf("%c", c));
}

int main(){ 
    int x; char c;
    scanf("%d %c", &x, &c);
    square(x, c);
    return 0;
}
