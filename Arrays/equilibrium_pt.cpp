#include <bits/stdc++.h>
using namespace std;
int equilibriumindex(int arr[], int n)
{
    int sum=0;
    int leftsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        sum= sum-arr[i];// sum becomes rightsum
        if(leftsum==sum)
        {
            return i;
        }
        leftsum+=arr[i];
    }  
    return -1;

}
int main(int argc, char const *argv[])
{
    int arr[]= { -7, 1, 5, 2, -4, 3, 0 };
    cout<<equilibriumindex(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}
