    #include <bits/stdc++.h>
    using namespace std;
    int ceilingarr(int arr[], int x, int low, int high)
    {
        if(x<arr[low])
            return low;
        if (x>arr[high])
            return -1;
        int mid= (low+high)/2;

        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            if(x<=arr[mid+1])
                return mid+1;
            else
                return ceilingarr(arr,x, mid+1, high);
        }
        else
        {   
            if(x>arr[mid-1])
                return mid;
            else
                return ceilingarr(arr, low, mid-1, x);

        } 
    }
    int main()
    {
        int arr[]= {1, 2, 8, 10, 10, 12, 19};
        int x=10;
        int n= 7;
        cout<<ceilingarr(arr,x,0, n-1);
        return 0;
    }