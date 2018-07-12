#include <bits/stdc++.h>
using namespace std;
string distinct(string s)
{
    int freq[256]= {0};
    string res = "";
    int j=0;
    int index[256]={0};
    for(int i = 0; i < s.length(); i++)
    {
        if((freq[s[i]]-'a')==0)
        {
            freq[s[i]-'a']++;
            index[s[i]-'a']=s[i];
        }
        else
        {
            index[s[i]-'a'] = 257;
        }

    }
    for(int i = 0; i < 256; i++)
    {
        if(index[i]!= 0 && index[i]!= 257)
        {
            char c= index[i];
            res.push_back(c);
        }
    }
    return res;
}
int main()
{
    string s="geeksforgeeks";
    cout<<s;
    cout<<distinct(s) ;
    return 0;   
}