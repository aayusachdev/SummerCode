#include <bits/stdc++.h>
using namespace std;
string rem_same_char(string s1, string s2)
{
    bool hash_pat[52]={0};
    bool hash_str[52]={0};
    for(int i=0;i<s2.size();i++)
    {
        hash_pat[s2[i]]=1;

    }

    string res="";
    for(int i=0;i<s1.size();i++)
    {
            if(hash_pat[s1[i]]==0)
            {
                res.push_back(s1[i]);
            }
    }
    return res;
}

int main()
{
    //string s1,s2;
    string s1="geeksforgeeks";
    string s2="mask";
    cout<<rem_same_char(s1,s2);
    return 0;
}


//complexity: (m+n)