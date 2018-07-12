#include <bits/stdc++.h>
using namespace std;
bool flipcheck(string s)
{
    int zeros,ones;
    zeros=ones =0;
    for(char c : s)
    {
        (c=='1')? ones++ : zeros++;
    }

    return (ones==1 || zeros==1);
}
int main()
{
    string s="10101";
    cout<<flipcheck(s);
    return 0;
}