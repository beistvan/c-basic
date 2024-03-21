int abs_arr(int arr[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++)
         if (arr[i] < 0) {
             arr[i] = -arr[i];
             cnt++;
         }
    return cnt;
}
