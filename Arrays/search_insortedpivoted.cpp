#include <bits/stdc++.h>
using namespace std;

int findpivot(int arr[], int low, int high)
{
    if(high<low)
        return -1;
    if(high==low)
        return low;
    int mid= (low+high)/2;
    if(arr[mid]>arr[mid+1] && mid<high)
        return mid;
    if(arr[mid]<arr[mid-1] && mid>low)
        return mid-1;
    if(arr[low]>=arr[mid])
        return findpivot(arr, low,mid-1);
    return findpivot(arr, mid+1, high);
    
}

int binary_search(int arr[],int key,int low, int high)
{
    if (high < low)
        return -1;
     
  int mid = (low + high)/2; /*low + (high - low)/2;*/
  if (key == arr[mid])
    return mid;
     
  if (key > arr[mid])
    return binary_search(arr, (mid + 1), high, key);
     
  // else
    return binary_search(arr, low, (mid -1), key);
}

int pivotbinarysearch(int arr[], int key, int n)
{
    int pivot= findpivot(arr,0, n-1);
    if(pivot==-1)
    {
       return binary_search(arr,key,0,n-1); //normal case
    }
    else if(arr[pivot]==key)
    {
        return pivot;
    }
    else if(key<arr[0])
    {
        return binary_search(arr,key,pivot+1, n-1);
    }
    else
    {
        return binary_search(arr,key,0,pivot-1);
    }
}
int main(int argc, char const *argv[])
{
    int arr[]= {3,4,5,6,1,2};
    int key=6;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<pivotbinarysearch(arr,key,n);
    return 0;
}
