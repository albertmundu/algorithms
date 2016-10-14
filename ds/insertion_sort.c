//insertion sort

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
