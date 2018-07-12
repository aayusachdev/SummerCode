int _binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low)
    {
        int mid = (low + high)/2; /*low + (high - low)/2;*/
 
        /* Check if arr[mid] is the first occurrence of x.
            arr[mid] is first occurrence if x is one of the following
            is true:
            (i) mid == 0 and arr[mid] == x
            (ii) arr[mid-1] < x and arr[mid] == x
        */
        if ( (mid == 0 || x > arr[mid-1]) && (arr[mid] == x) )
            return mid;
        else if (x > arr[mid])
            return _binarySearch(arr, (mid + 1), high, x);
        else
            return _binarySearch(arr, low, (mid -1), x);
    }
 
    return -1;
}
 