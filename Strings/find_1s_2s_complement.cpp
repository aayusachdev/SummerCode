#include<bits/stdc++.h>
using namespace std;
char flip(char ch)
{
    return (ch=='1' ? '0' : '1');
}
string ones(string s)
{
    string ones="";
    for(char ch: s)
    {
        ch=flip(ch);
        ones= ones+ ch;
    }
    return ones;
}

string twos( string ones)
{
    string twos=ones;
    for (int i = ones.length() - 1; i >= 0; i--)
    {
        if (ones[i] == '1')
            twos[i] = '0';
        else
        {
            twos[i] = '1';
            break;
        }
    }
    return twos;
}
int main()
{
    string s="1100";
    string ones1= ones(s);
    cout<<ones1;
    string twos1= twos(ones1);
    cout<<endl<<twos1;
    return 0;
}