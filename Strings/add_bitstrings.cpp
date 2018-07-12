#include <bits/stdc++.h>
using namespace std;
int make_equal( string &s1, string &s2)
{
    int len1= s1.length();
    int len2= s2.length();
    if(len1< len2)
    {
        for(int i=0;i< len2- len1; i++)
        {
            s1= '0'+s1;
        }
        return len2;
    }
    else if(len2< len1)
    {
        for(int i=0;i< len1- len2; i++)
        {
            s2= '0'+s2;
        }
        return len1;
    }

}
string addbitstrings(string s1, string s2)
{
    string s="";
    int carry=0;
    int fin_length= make_equal(s1,s2);
    for(int  i= fin_length-1; i>=0;i--)
    {
        int first= s1[i]-'0';
        int second= s2[i]-'0';
        int sum = (first^second^carry) + '0';
        s= (char)sum + s;
        carry = (first & second) | (second & carry) | (first & carry); 

    }
    if(carry)
    s= '1'+ s;
    return s;
}
int main(int argc, char const *argv[])
{
    string s1="100101";
    string s2="100101";
    cout<<addbitstrings(s1,s2);
    return 0;
}
