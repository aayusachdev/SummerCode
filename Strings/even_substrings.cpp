#include <bits/stdc++.h>
using namespace std;
int even_subs(string s)
{
    int res=0;
    for(int i = 0; i < s.length(); i++)
    {
        int num= s[i]-'0';
        if(num%2==0)
        {
            res+=i+1;
        }
        /* code */
    }
    return res;
}
int main()
{
    string s="154";
    cout<<even_subs(s);
    return 0;
}


// Linear