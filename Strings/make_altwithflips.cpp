#include<bits/stdc++.h>
using namespace std;
char flip(char ch)
{
    return ((ch=='1')? '0': '1');
}
int check_min(string s,char expected)
{
    int flip_count = 0;
    for(char ch : s)
    {
        if(ch!= expected)
            flip_count++;

        expected= flip(expected);
    }
    return flip_count;
   
}
int min_flips_make_alt(string s)
{
    return min(check_min(s,'0'), check_min(s, '1'));
}
int main()
{
    string s="0001010111";
    cout<<min_flips_make_alt(s);
    return 0; 
}