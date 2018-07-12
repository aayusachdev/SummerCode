#include <bits/stdc++.h>
using namespace std;
string get_charset(string s)
{
    // find all unique letters in this string
    bool visited[265]= {0};
    string key= "";
    for(int i = 0; i < s.length(); i++)
    {
        visited[s[i]]= 1;
    }
    
    for(int i = 0; i < 256; i++)
    {
        if(visited[i]==1)
        {
            key.push_back(char(i));            
        }
    }
    return key;

}
void groupwords(string s[], int n)
{
    unordered_map <string, vector <int> > hash;

    
    for(int i = 0; i < n; i++)
    {
        string key= get_charset(s[i]);
        hash[key].push_back(i);
    }

    for( auto it= hash.begin(); it!= hash.end(); it++)
    {
        
        for(auto pt= (*it).second.begin(); pt!= (*it).second.end(); pt++)
        {
            /* code */
            cout<<s[*pt]<<", ";
        }
        cout<<endl;
    }

        
}
int main(int argc, char const *argv[])
{
    string s[]= {"aayu","ayu","love","loove"};
    int n= sizeof(s)/sizeof(s[0]);
    groupwords(s,n);
    return 0;
}
