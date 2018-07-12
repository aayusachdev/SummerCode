#include <bits/stdc++.h>
using namespace std;
void pattern( string s1, string s2)
{
    int len1= s1.length();
    int len2= s2.length();
    int  j;
    for(int i=0; i<=len1-len2;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(s1[i+j]!=s2[j])
            {
                break;
            }
        }
        if(j==len2)  // traversed entire string
            cout<<i+1<<" ";
    }
}
int main()
{
    string txt="dasdsa";
    string pat="sds";
    pattern(txt, pat);
    return 0;
}