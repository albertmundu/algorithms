#include <stdio.h>
#define swap(a,b){int t=a;a=b;b=t;}

int partition(int arr[],int l,int r){
    int p=arr[l];
    int i=l;
    for(int j=l+1;j<=r;j++){
        if(p>=arr[j]){
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[l],arr[i]);
    return i;
}

int partition_(int arr[], int l, int r){
    int p=arr[l];
    int i=l;
    int j=r+1;
    while(1){
        do ++i;while(arr[i]<=p && i<=r);
        do --j;while(arr[j]>p);
        if(i>=j) break;
        swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}

void quick_sort(int arr[],int l,int r){
    int s;
    if(l<r){
        s=partition(arr,l,r);
        quick_sort(arr,l,s-1);
        quick_sort(arr,s+1,r);
    }
}


int main(){
    int arr[]={6,10,13,5,8,3,2,11};
    quick_sort(arr,0,8-1);
    for(int i=0;i<8;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
