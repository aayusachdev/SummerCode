#include <bits/stdc++.h>
using namespace std;
int equilibriumpoint(int arr[], int n)
{
    int sumarr= accumulate(arr, arr+n,0);
    // sum of array
    int res=-1000; int prefix_sum=0; 
    for(int i=0;i<n;i++)
    {
        prefix_sum += arr[i];
        if(prefix_sum== sumarr)
        {
            res= max(res, prefix_sum);
        }
        sumarr= sumarr- arr[i];  
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]= { -2,5, 3, 1, 2, 6, -4, 2 };
    cout<<equilibriumpoint(arr,8);  
    return 0;
}
