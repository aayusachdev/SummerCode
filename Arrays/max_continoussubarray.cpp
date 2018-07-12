//KADENE ALGO
#include <bits/stdc++.h>
using namespace std;
void sumofsubarray(int arr[])
{
    int a, b;
    a=b=0;
    for(int i=0;i<8;i++)
    {
        b+=arr[i];
        if(a<b)
        {
            a=b;
        }
        if(b<0)
            b=0;
    }
    cout<<a;
}
int main()
{
    int arr[8]= {-1,-2,-3,4};
    sumofsubarray(arr);
    return 0;
}