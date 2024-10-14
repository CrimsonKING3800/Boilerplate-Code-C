int binary_search(int arr[], int size, int element){
    int high,mid,low;
    high=size-1;
    low=0;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(element>arr[mid]){
            low=mid+1;
        }
        if(element<arr[mid]){
            high=mid-1;
        }
    }
    return -1;
}
