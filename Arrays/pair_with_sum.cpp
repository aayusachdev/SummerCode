#include <bits/stdc++.h>
using namespace std;
int findpairwithsum(int arr[],int n, int x)
{
    //int pivot=arr[0];
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1])
            break;
        /* code */
    }
    cout<<i;
    int pivot=0;
    for(i = 0; i < n; i++)
    {
        if(arr[pivot]<arr[i])
            pivot= i;
        /* code */
    }
    cout<<" "<<pivot;
    int maxi= i;
    int mini= (i+1)%n;
    int count=0;
    while(mini!=maxi)
    {
        if(arr[mini]+arr[maxi]==x)
            {
                count++;
                if(mini==(maxi+n-1)%n)
                {
                    return count;
                }
                mini=(mini+n)%n;
                maxi=(maxi+n-1)%n;
            }
        else if(arr[mini]+arr[maxi]>x)
        {
            // lower sum side i.e. decrease r
            maxi= (maxi+n-1)%n;
        }
        else
        {
            mini=(mini+1)%n;
        }
    }
    return count;
}
int main()
{
    int arr[]= {11,15,6,7,9,10};
    int n= 6;
    int x= 16;
    cout<<findpairwithsum(arr,n,x);
    return 0;

}