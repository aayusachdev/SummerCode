#include <bits/stdc++.h>
using namespace std;
// Boolean hash map function that returns string
char *rem_dups(char *s)
{
    bool hash[256]= {0};
    int st, red;
    st=red=0;
    while(*(s+st))
    {
        char temp = *(s+st);
        if(hash[temp]==0 )
        {
            hash[temp]=1;
            *(s+red) = *(s+st);
            red++;
        }
        st++;
    }
    *(s+red)= '\0';
    return s;
}


int main()
{
    char s[]= "aayush sachdev";
    printf("%s", rem_dups(s));

    return 0;
}

/* HERE ORDER IS PRESERVED
COMP: LINEAR
Other methods of duplicates finding:
1. 2 loops (n*n)
2. Hashing 
3. sorting - (nlogn)  
4. BST
*/

// JAVA indexOf()
