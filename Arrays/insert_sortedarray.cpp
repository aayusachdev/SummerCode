#include<bits/stdc++.h>
using namespace std;
int insertarray(int arr[],int cap,int key ,int size)
{
    if(size>=cap)
        return size;
    int i;
    for(i= size-1; i>=0 && key<arr[i];i--)
    {
        arr[i+1]= arr[i];
    }
    arr[i+1]= key;
    return (size+1);
}
int main()
{
    int arr[10]= {1,2,3,4,5,7};
    int capacity= sizeof(arr)/sizeof(arr[0]);
    int key=6;
    int n= insertarray(arr,capacity,key, 6);
    for(int i=0; i<n;i++)
        cout<<arr[i];
    return 0;

}