#include  <iostream>
using namespace std;
// c++ 14
char freq(char s[])
{
    int hash[254]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        hash[s[i]]++; // counting
    }

    //find second largest number in this array
}
int main(int argc, char const *argv[])
{
   // int hash[256]= {0};
    char str[100]= "aayushss";
    cout<<freq(str);
    return 0;
}
