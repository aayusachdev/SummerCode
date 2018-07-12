 #include <bits/stdc++.h>
 using namespace std;
 int binarysearch(int arr[], int key, int low, int high)
 {
     if(high<low)
        return -1;
     int mid= (high+low)/2;
     if(arr[mid]==key)
        return mid;
     if(key<arr[mid])
     {
         return binarysearch(arr, key,low, mid-1); 
     }
     if(key>arr[mid])   
     {
         return binarysearch(arr,key,mid+1, high);
     }

 }
 int delete_array(int arr[], int n, int key)
 {
     int pos= binarysearch(arr, key, 0, n);
   //  cout<<pos;
     for(int i= pos; i<n;i++ )
     {
         arr[i]= arr[i+1];
     }
     return n-1;

 }
 int  main()
 {
     int arr[5]={1,2,3,4,5};
     int n=5;
     int key=4;
     
   
     
    int new_n= delete_array(arr,n,key);
    
   
  for(int i = 0; i < new_n; i++)
    {
        cout<<arr[i];
        /* code */
    
    }

    return 0;
 }