#include <stdio.h>
#include <math.h>

int main() {
    int ax, ay, bx, by;
    scanf("%d %d", &ax, &ay);
    scanf("%d %d", &bx, &by);
    float d = sqrt(ax * ax + ay * ay) - sqrt(bx * bx + by * by);        
    printf("%d", d < 0 ? 1 : (d > 0 ? 2 : 0));
    return 0;
}
