#include<bits/stdc++.h>
using namespace std;
int peakelementbinarysearch (int arr[], int low, int high)
{
    int mid= low+ (high-low)/2;
        if((mid==0 || arr[mid-1]<= arr[mid]) && (arr[mid+1] <=arr[mid] ))
            return mid;
        else if (arr[mid-1]>arr[mid])
            return peakelementbinarysearch(arr, low, mid-1);
        else 
            return peakelementbinarysearch(arr, mid+1, high);
}
int peakelement(int arr[], int size)
{
    return peakelementbinarysearch(arr, 0, size-1);
}
int main(int argc, char const *argv[])
{
    int arr[]= {1, 3, 20, 4, 1, 0};
    cout<<peakelement(arr,6); 
    return 0;
}
