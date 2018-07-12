//EFFIECTIVE METHOD
#include <bits/stdc++.h>
using namespace std;

char flip(char ch)
{
    return (ch=='1' ? '0' : '1');
}
string twoscomplement(string s)
{
    /*CONCEPT
        starting from the LSB(right most) find the index of the first occuring 1.
        let ths t index be called flag. Now from index 0 to flag-1, flip the digits.
        if no 1 is present, concatenate 1 add the beginning of the string and return.
    */
   int i=0;
   for(i=s.length()-1;i>=0;i--)
   {
    if(s[i]=='1')
    {
        break;
    }   
   }
   if(i==-1)
   {
       s='1'+s;
       return s;
   }
   for(int k =0; k<=i-1; k++)
   {
        s[k]= flip(s[k]);   
   }
   return s; 
}
int main()
{
    string s="0000";
    cout<<twoscomplement(s);
    return 0;
}