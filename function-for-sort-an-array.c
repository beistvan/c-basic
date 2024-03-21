void sort_arr(int arr[], int n, int fl){    
    if (fl == 0)
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)             
                if (arr[i] > arr[j]) {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
   if (fl == 1) 
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++) 
                if (arr[i] < arr[j]) {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }                  
}
// fl: 0 - ascending, 1 - descending
