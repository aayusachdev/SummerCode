#include <bits/stdc++.h>
using namespace std;
char expand_find(string str, int k)
{
    // str is "a12d34s2"
    string expand= "";
    string temp;
    int freq=0;
    for(int i=0;str[i]!='\0';i++)
    {
        temp= "";
       while(str[i] >= 'a' && str[i] <='z') 
       {
           temp.push_back(str[i]);

       }
       freq=0;
       while(str[i]>='1' && str[i]<='9')
       {
            freq= freq*10 + str[i]-'0';
            i++;          
       }
       for(int j=1; j<=freq; j++)
       {
            expand.append(temp);
       } 
    }
    return expand[k-1];
}
int main(int argc, char const *argv[])
{
    string s="ab4c12ed3";
    int k=21;
    cout<<expand_find(s,k);
    return 0;
}
