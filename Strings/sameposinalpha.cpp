#include <bits/stdc++.h>
using namespace std;
int same_pos_as_alpha(string str)
{
    int res=0;
    //abcdefgh... =[1,2,3...]
    for(int i=0; i<str.length();i++)
    {
        if(i==str[i]-'a'|| i==str[i]-'A')
        res++;
    }
    return res;
}
int main(int argc, char const *argv[])
{
    string s= "AbgdeF";
    cout<<same_pos_as_alpha(s);
    return 0;
}


// linear