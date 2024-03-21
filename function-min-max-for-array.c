int minmax(int arr[], int n, int fl) {
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    return fl ? max : min;
}
// fl: 0 - min, 1 - max
