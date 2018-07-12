// search, insert, delete operation for unsorted array
#include  <bits/stdc++.h>
using namespace std;
int searcharr(int arr[], int n)
{
    // linear traversal of aaray
    /*if arr[i]==key
        RETURN i*/
}

int insert(int arr[], int key, int size, int capacity)
{
    if(size>=capacity)
    {
        return size;

    }
    else
    {
        arr[size]= key;
        return size+1;
        // whatever is returned, it becomes  the new last index
    }
}

int findpos(int arr[], int size, int key)
{
    for(int i=0;i<size; i++)
    {
        if(arr[i]==key)
        return i;

    }
    return -1;
}
int deletearr(int arr[], int size, int  key)
{
    int pos= findpos(arr,size,key);
    if(pos==-1)
        return size;
    else
    {
        for(int i=pos; i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        return size-1;
    }    
}
int main(int argc, char const *argv[])
{
    int arr[100]={1,2,3,4,5,6,7};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<searcharr(arr,size);
    insert(arr,10,size,100);

    int n= deletearr(arr,size, 6);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
