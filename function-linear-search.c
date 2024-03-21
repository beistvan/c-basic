int linear_search(int arr[], int n, int arg) {
    int i = 0;
    while (i < n && arr[i] != arg)
        i++;
    return i == n ? -1 : i;
}
