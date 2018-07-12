#include <bits/stdc++.h>
using namespace std;
int countforones(string s)
{
    int count_one=0;
    for(char ch: s)
    {
        if(ch=='1')
            count_one++;
        
    }
    return (count_one*(count_one-1))/2;
    
}
int main()
{
    string s="00100101";
    cout<<countforones(s);
    return 0;
}

//if single counted: n(n+1)/2