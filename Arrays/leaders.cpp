#include <bits/stdc++.h>
using namespace std;
void leaders(int arr[], int n)
{
    
    int leader= arr[n-1];
    cout<<leader<<" ";
    for(int i = n-2; i>=0; i--)
    {
        if(arr[i]>leader)
            {
                leader= arr[i];
                cout<<arr[i]<<" ";
            }
    }
    
}
int main(int argc, char const *argv[])
{
    int  arr[]={16,17,4,3,5,2};
    leaders(arr,6);
    return 0;
}
