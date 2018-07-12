#include <bits/stdc++.h>
using namespace std;
// n*n solution
char max_cons(string s)
{
    char res;
    int count=0;
    for(int i = 0; i < s.size(); i++)
    {
       int cur_count=1;
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]!=s[j])
            break;
            cur_count++;
        }
        if(cur_count>count)
        {    count= cur_count;
             res= s[i];
        }
    }
    return res;

}
int main(int argc, char const *argv[])
{
    string s="gekkkks";
    cout<<max_cons(s);    
    return 0;
}
