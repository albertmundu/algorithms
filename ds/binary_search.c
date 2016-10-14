#include <stdio.h>


int binary_search(int arr[],int key,int left,int right){
    while(left<=right){
        int mid=(right-left)/2+left;
        if(key == arr[mid]) return mid;
        if(key > arr[mid]) left=mid+1;
        else right=mid-1;
    }
    return -1; //if not found
}

int binary_search_r(int arr[],int key,int left,int right){
    if(left<=right){
        int mid=left+(right-left)/2;
        if(key==arr[mid]) return mid;
        if(key > arr[mid]) return binary_search_r(arr,key,mid+1,right);
        else return binary_search_r(arr,key,left,mid-1);
    }
    return -1; //if not found
}


