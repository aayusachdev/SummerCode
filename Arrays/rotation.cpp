// REVERSAL ALGO
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

void rotatefunc(int arr[],int  d, int n)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
    int arr[]= {1,2,3,4,5,6,7};
    int d=2;
    rotatefunc(arr,d,7);
    //print array
    
    for(int i = 0; i < 7; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    return 0;
}