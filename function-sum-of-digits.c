void sum_digits(int * x){
    int s = *x % 10;
    while (*x /= 10)
        s += *x % 10;
    *x = s;
}
