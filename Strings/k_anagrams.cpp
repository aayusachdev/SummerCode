#include <bits/stdc++.h>
using namespace std;
bool k_anagrams(string s1, string s2, int k)
{
    //check length, should be equal
    if(s1.length()!= s2.length())
    {
        return false;
    }

    //count arrays
    int count1[250], count2[250];
    memset(count1, 0, sizeof(count1));
    memset(count2, 0, sizeof(count2));

    
    for(int i = 0; i < s1.length(); i++)
    {
        count1[s1[i]-'a']++;
    }
    for(int i = 0; i < s2.length(); i++)
    {
        count2[s2[i]-'a']++;
    }
    
    //no of characters that are different in both strings
    int count=0;
    for(int i=0;i<26;i++)
    {
        if (count1[i] > count2[i])
            count = count + abs(count1[i]-count2[i]);
 
    }
    //cout<<count;
    return (count<=k);



}
int main(int argc, char const *argv[])
{
    string s1="anagram";
    string s2="grammar";
    int k=2;
    cout<<k_anagrams(s1,s2,k);
    return 0;
}
