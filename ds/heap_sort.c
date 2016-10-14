#include <stdio.h>
#define swap(a,b){int t=a;a=b;b=t;}

void heapify(int arr[],int n,int i){
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;
    if(left<=n && arr[left]>arr[largest])
        largest=left;
    if(right<=n && arr[right]>arr[largest])
        largest=right;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void build_heap(int arr[],int arr_size){
    for(int i=arr_size/2;i>=0;i--)
        heapify(arr,arr_size-1,i);
}

void sort(int arr[], int arr_size){
    build_heap(arr,arr_size);
    for(int i=arr_size-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i-1,0);
    }
}

void print(int arr[],int arr_size){
    for(int i=0;i<arr_size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main(){
    int arr[]={4,2,1,5,7};
    build_heap(arr,5);
    print(arr,5);
    sort(arr,5);
    print(arr,5);
    return 0;
}
