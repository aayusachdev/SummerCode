#include <bits/stdc++.h>
using namespace std;
int anti(int n)
{
    int a[n], b[n];
    a[0]=b[0]=1;
    for(int i=1;i<n;i++)
    {
        a[i]= a[i-1]+b[i-1];
        b[i]= a[i-1];
    }
    return a[n-1]+b[n-1];
}
int main()
{
    int n=5;
    // strings with consecutve ones: total- string with no consecutive ones.
    // finding the latter
    int total= pow(2,n);
    int an= anti(n);
    cout<<total- an;
    return 0;
}