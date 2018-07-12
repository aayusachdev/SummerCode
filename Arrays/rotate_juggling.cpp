#include <bits/stdc++.h>
using namespace std;
int findgcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return findgcd(b, a%b);
}
void arrayrotate(int arr[],int d, int n)
{
    int gcd= findgcd(d,n);
    for(int i=0; i<gcd; i++)
    {
        int temp= arr[i];
        int j=i;
        while(1)
        {
            int k=j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;
            arr[j] = arr[k];
            j=k;
        }
        arr[j]= temp;
    }
}
void printarray(int arr[], int n)
{
    
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    
}
int main()
{
   int arr[]= {1,2,3,4,5,6,7};
   int d= 2;
   int n=7;
   arrayrotate(arr,d,n);
   printarray(arr,n);
   return 0;
}