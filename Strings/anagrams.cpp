// compare whether 2 strings are anagrams or not
#include <bits/stdc++.h>
using namespace std;
bool anagram(string s1, string s2)
{
    int freq[52]={0};
    
    if(s1.length()!=s2.length())
    {
        return false;
    }
    for(int i = 0; i < s1.length() ; i++)
    {
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
        /* code */
    }
    
    for(int i = 0; i < 52; i++)
    {
        if(freq[i]!=0)
            return false;
        /* code */
    }
    return true;
    
    
}
int main()
{
    string s1,s2;
    s1="aaca";
    s2="aca";
    cout<<anagram(s1,s2);
    return 0;
}