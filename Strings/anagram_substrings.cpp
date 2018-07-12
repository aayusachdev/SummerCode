// 2 DIFFERENT HASHINGS
#include <bits/stdc++.h>
using namespace std;
int countanagramsubstrings(string  s)
{
    /*LOGIC:
        for every substring of s find the freq of each character of that substring, take that sum as the 
        key for the map, and as value the count of it.
        */

       unordered_map <int, int> hash;

       for(int i=0;i<s.length();i++)
       {
           for(int j=i;j<s.length();j++)
           {
               
           }
       }

}
int main(int argc, char const *argv[])
{
    string s= "xyyx";
    cout<<countanagramsubstrings(s);    
    return 0;
}
