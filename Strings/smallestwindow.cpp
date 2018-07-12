// bruteforce: generate all sub strings, and find the smallest one containing all the characters.

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    string s="aayush";
    
    for(int i = 0; i < s.size(); i++)
    {
        cout<<s.substr(i,s.size())<<"\n";
        /* code */
    }
    
    return 0;
}
