//Peak Index in a Mountain Array

int peakBinarySearcg(int* A, int mid, int Asize) {
    if (mid == Asize)
        return mid;
    int mountain;
    int mid_d = (mid + Asize) / 2;
    
    if (A[mid_d-1] < A[mid_d] && A[mid_d+1] < A[mid_d])
        return mid_d;
    else if (A[mid_d-1] < A[mid_d])
        mountain = peakBinarySearcg(A, mid_d, Asize);
    else
        mountain = peakBinarySearcg(A, mid_d/2, mid_d);
     
    return mountain;
}

int peakIndexInMountainArray(int* A, int ASize) {
    int mountain;
    int mid =  ASize/2;
    
    if (A[mid-1] < A[mid] && A[mid+1] < A[mid])
        return mid;
    else if (A[mid-1] < A[mid])
        mountain = peakBinarySearcg(A, mid, ASize);
    else
        mountain = peakBinarySearcg(A, mid/2, mid);
    
    return mountain;
}
