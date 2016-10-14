//maximum subarray problem is the task of finding the continuous subarray
//within a one-dimensional array of numbers which has the largest sum.


int maximum_subarray(int arr[],int n){
    int max_ending_here=0,max_so_far=0;
    for(int i=0;i<n;i++){
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here<0)
            max_ending_here=0;
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
    }
    return max_so_far;
}


//in the case that the entire array consists of negative numbers

int maximum_subarray_negative(int arr[],int n){
    int max_ending_here=arr[0],max_so_far=arr[0];
    for(int i=1;i<n;i++){
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here < arr[i])
            max_ending_here=arr[i];
        if(max_so_far < max_ending_here)
            max_so_far=max_ending_here;
    }
    return max_so_far;
}
