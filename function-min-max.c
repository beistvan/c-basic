void minmax(int * x, int * y){
    int t = *x;
    *x = *x < *y ? *x : *y;
    *y = t > *y ? t : *y;
}
