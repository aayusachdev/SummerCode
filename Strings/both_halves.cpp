#include <bits/stdc++.h>
using namespace std;
#define N 52

bool check(string s)
{
    int freq[N]={0};
    
    for(int i = 0,j=s.length()-1; i <j; i++,j--)
    {
        freq[s[i]-'a']++;
        freq[s[j]-'a']--;

    }

    
    for(int i = 0; i < N; i++)
    {
        if(freq[i]!=0)
            return false;
    }
    return true;
    
    
}

int main()
{
    string s="abab";
    cout<<check(s);
    return 0;    
}