#include <bits/stdc++.h>
using namespace std;
int subarraysum(int arr[], int sum , int n)
{
    int cur_sum= arr[0];
    int start=0;
    for(int i=1; i<n; i++)
    {
        while(cur_sum>sum && start<= i-1)
        {
            cur_sum-=arr[start];
            start++;
        }
        if(cur_sum==sum)
            {cout<<start<<"  "<<i-1;
                return 1;
            }
        if(cur_sum< sum)
            cur_sum+=arr[i];
    }

    cout<<"No sub array";

    return 0;
}
int main(int argc, char const *argv[])
{   
    int arr[]= {15, 2, 4, 8, 9, 5, 10, 23};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum= 23;
    subarraysum(arr,sum,n);
    return 0;
}
