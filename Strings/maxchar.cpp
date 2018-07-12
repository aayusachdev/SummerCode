#include <iostream>
#include <cstring>
#include <cstdio> // instead of stdio
using namespace std;
char maxOccuringChar( char s[] )
{
    int count[256]= {0}; // hashing
    int len= strlen(s);
    for(int i=0; i<len; i++)
    {
            count[s[i]]++;
    }
    char res;
    int max= -1;
    for(int i=0;i<len;i++)
    {
        if(max < count[s[i]])
        {    max= count[s[i]];
              res= s[i]; 
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    char str[]= "ayush rrocks";
    printf("%c", maxOccuringChar(str));
  return 0;
}
