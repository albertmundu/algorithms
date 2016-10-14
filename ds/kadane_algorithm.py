# maximum subarray problem is the task of finding the continuous subarray
# within a one-dimensional array of numbers which has the largest sum.

def max_subarray(A):
    max_ending_here=max_so_far=0
    for x in A:
        max_ending_here=max(0,max_ending_here+x)
        max_so_far=max(max_so_far,max_ending_here)
    return max_so_far


#in the case that the entire array consists of negative numbers

def max_subarray_negative(A):
    max_ending_here=max_so_far=A[0]
    for x in A[1:]:
        max_ending_here=max(x,max_ending_here+x)
        max_so_far=max(max_so_far,max_ending_here)
    return max_so_far
