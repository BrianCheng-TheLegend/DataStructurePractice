int BinarySearch(int *A,const int x,const int n){
    int left=0,right=n-1;
    while(left<=right){
        int middle=(left+right)/2;
        if(x<A[middle])
            right=middle=1;
        else if(x>A[middle])
            left=middle+1;
        else 
            return middle;
    }
    return -1;

}



int RecBinarySearch(int *A,const int x,const int left,const int right){
    if(right>=left){
        int middle=(left+right)/2;
        if(A[middle]==x)
            return middle;
        
        if(A[middle]>x)
            return RecBinarySearch(A,x,left,middle-1);
        
        return RecBinarySearch(A,x,middle+1,right);
    }
    return -1;
}