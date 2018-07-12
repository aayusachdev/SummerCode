#include <bits/stdc++.h>
using namespace std;
int substring(string s, int k)
{
    int hash[200];
  int res=0;
    for(int i=0;i<s.length(); i++)
    {
            int dis_count=0;         
          memset(hash, 0, sizeof(hash));
                // ={0}
        for(int j=i; j<s.length(); j++)
        {
            if(hash[s.at(j)-'a']==0)   
                dis_count++;
            hash[s.at(j)-'a']++;
            if(dis_count==k)
                res++;
            if(dis_count>k)
            break;            

        }


    }
    return res;


}
int main(int argc, char const *argv[])
{
    string str= "abcbaa";
    int k=3;
    cout<<substring(str,k);
    return 0;
}
