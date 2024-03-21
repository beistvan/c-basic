int gcd(int x, int y){
    int t;
    while (x) {
        t = x;
        x = y % x;
        y = t;
    }
    return y;
} 

void reduce_fraction(int * a, int * b){
    int g = gcd(*a, *b);
    *a /= g;
    *b /= g;
}
