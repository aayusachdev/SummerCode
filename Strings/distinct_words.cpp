#include <bits/stdc++.h>
using namespace std;
int distinct(string s[], int n)
{
    unordered_map <string, int> m;
    for(int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    int count=0;
    
    for(auto it = m.begin(); it != m.end(); it++)
    {
        if(it->second==2)
            count++;
    }
    return count;
    

}
int main()
{
    string s[]={"aayu","asd","aah","aah","aayu"};
    int n = sizeof(s)/sizeof(s[0]);
    cout<<distinct(s,n);
    return 0;
}