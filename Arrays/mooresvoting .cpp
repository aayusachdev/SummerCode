
#include<bits/stdc++.h>
using namespace std;
int step1(int arr[], int n)
{
    int max_index=0; int count=1;
    for(int i=1; i<n; i++) 
    {
        if(arr[i]==arr[max_index])
            count++;
        else
            count--;
        if(count==0)
          {  max_index=i;
             count=1;
          }

    }  
    return max_index;
}
int step2(int arr[],int n, int cand)
{
    int count =0; 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==cand)
        {
            count++;
        }
    }
    if(count>n/2)
        return cand;
    return  -1;
}
int main()
{
    int  arr[]= {1,2,3,4,5,64,3,3,3};
    int cand = step1(arr,(sizeof(arr)/sizeof(arr[0])));
    step2(arr,n,cand);
    return 0;
}