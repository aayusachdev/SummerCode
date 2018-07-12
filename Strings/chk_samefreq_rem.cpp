#include <bits/stdc++.h>
using namespace std;

bool allsame(int arr[])
{
    int same;
    // get first non 0 element value
    for(int i=0;i<52;i++)
    {
        if(arr[i]!=0)
        {
            same=arr[i];
            break;
        }
    }
    int flag=true;
    //real check
    for(int i=0;i<52;i++)
    {
        if(arr[i]!=0 && arr[i]!= same)
        {
            flag=false;
            break;
        } 
    }
    return flag;
}
bool check(string s)
{
    int hash[52];
    memset(hash,0,sizeof(hash));
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]-'a']++; // all freq
    }
    // check if all freq are samee?
    if(allsame(hash))
    {
        return true;
    }
    for(char i='a'; i<='z';i++)
    {
        if(hash[i-'a']>0)
        {
            hash[i-'a']--;
            if(allsame(hash))
                return true;
            hash[i-'a']++;
        }
    }
    return false;
}
int main()
{
    string s="xxyyz";
    cout<<check(s);
    return 0;
}