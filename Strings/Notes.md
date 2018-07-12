In C its an array of characters. Difference between a character array and a string is the string is terminated with a special character ‘\0’.
Methods of initialization:

1. char str[] = "GeeksforGeeks";

2. char str[50] = "GeeksforGeeks";

3. char str[] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

4. char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};


Passing to a function: same way as arrayvoid function( char arr[])
{
     // defination
}
// code
function(str);

->  Puts() preferred for printing a string because it is generally less expensive (implementation of puts() is generally simpler than printf()), and if the string has formatting characters like ‘%’, then printf() would give unexpected results. Also, if str is a user input string, then use of printf() might cause security issues (see this for details).
Also puts() moves the cursor to next line. If you do not want the cursor to be moved to next line, then you can use following variation of puts():  fputs( str, stdout);

1. Auto variables stored in stacks segment
2. Global or static variables stored in data segment
3. Using character pointer strings can be stored in two ways:
             -> Read only string in a shared segment.
                when string is directly assigned to a pointer, its read only. 

                char *str= "aayu";  // read only part of the shared segment
              
                This is stored in shared read only location. In the above line "aayu" is stored in a shared read only location, but pointer str                 is stored in a read-write memory. You can change str to point something else but cannot change value at present str. So                     this kind of string should only be used when we don’t want to modify string at a later stage in program.
         
            -> Dynamically allocated in heap segment.
               Strings are stored like other dynamically allocated things in C and can be shared among functions.
              
char *str;
int size = 4; /*one extra for ‘\0’*/
str = (char *)malloc(sizeof(char)*size);
*(str+0)= 'a';
*(str+1)= 's';  // works
Individual position value can be changed, as data is stored in writable heap segment.
std::string class in C++

#include<string> // for string class

Represent sequence of characters as an object of class.
1. memory is allocated dynamically.
2. Implementation of character array is faster than std:: string. Strings are slower when compared to implementation than character array.
Operations on strings

1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.

2. push_back() :- This function is used to input a character at the end of the string.

3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.

3. capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.

4. resize() :- This function changes the size of string, the size can be increased or decreased.

5.shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to its size. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.

7. begin() :- This function returns an iterator to beginning of the string.

8. end() :- This function returns an iterator to end of the string.

9. rbegin() :- This function returns a reverse iterator pointing at the end of string.

10. rend() :- This function returns a reverse iterator pointing at beginning of string.

Declaring an iterator:

std:: string:: iterator it;

std:: string:: reverse_iterator rit;

for (it=str.begin(); it!=str.end(); it++)
    cout << *it;

for (it1=str.rbegin(); it1!=str.rend(); it1++)
    cout << *it1;

11. copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.

12. swap() :- This function swaps one string with other.
    str1.swap(str2);  //swaps values of str1 and str2

13.char *token= strok(str,  "-" );

14. str.length()- string length

15.  // Initializing array with 0
     int cnt[26];
     memset(cnt, 0, sizeof(cnt));

16. str.append(temp)- concatenate a string temp at the end of the str

17. #define OUT 0
    int flag= OUT;

18. s.substr(i, len)  substring of s starting from pos i till length of len

19. s.size() for string size

-> For maping character's freq:
    
        hash[str[i]-'a']++

20. USE OF ARRAY HASHS FOR CHARACTER BASED PROBLEMS AND MAPS FOR ARRAY OF STRINGS.

21. NO OF SUBSTRINGS OF A STRING OF LENGTH N: N*(N+1)/2

22. NO OF SUBSTRINGS ENDING AT S[i] IN STRING S: (i+1)

23. Use auto for iterators
    -> auto it= m.begin();
    -> std::string :: iterator it;

** USE OF MAP FOR STRINGS **
for(auto it = m.begin(); it != m.end(); it++)
    {
        if(it->second==2)
            count++;
    }
 
 
 ** DEREFERENCING FOR THE MAPS

  for(auto pt= (*it).second.begin(); pt!= (*it).second.end(); pt++)
        {
            /* code */
            cout<<s[*pt]<<", ";
        }

        OR
 
  (it->second).begin();

24. sort(s.begin(), s.end()); To sort the string

25. next_permutation(s.begin(), s.end()); To get the next lexicographical string 

26. MULTIMAPS can have same keys but kay+value together should be unique. See implementation.

27. window questions,see.

28. String traversing:
    -> for (char ch : str)
        (ch == '0') ? ++zeros : ++ones;

29. Two's complement effective method
    -> One traverse only.
    -> For one’s complement, we simply need to flip all bits. For 2’s complement, we first find one’s complement. We          traverse the one’s complement starting from LSB (least significant bit), and look for 0. We flip all 1’s (change      to 0) until we find a 0. Finally, we flip the found 0.
    -> traverse the string from last till the single 1 is not traversed and after that flip all values of string i.e. 0      to 1 and 1 to 0. (from i-1 to end)

30. Begin and End with same character:
    -> Find the freq of the character.
    -> for each character, if freq is n:
    ->2 cases:
        ->if single occurence is also counted as a sub string, n(n+1)/2
        ->else, n(n-1)/2

31. DP solution for consecutive  ones problem:
    -> a[i] = a[i - 1] + b[i - 1]
       b[i] = a[i - 1] 
    -> solution is a[n-1] + b[n-1]

32. total binary strings of length n: pow(2,n)

33. Strings are pass by value always. To pass by reference use  (string &s) in defination

34. Adding binary strings:
    ->  int sum = (first^second^carry) + '0';
        s= (char)sum + s;
        carry = (first & second) | (second & carry) | (first & carry); 

35. Find Binary of next number:
    -> traverse the string from rightmost character and convert all 1s to 0s until we find a 0. Finally convert the found    0 to 1. If we do not find a 0, we append a 1 to overall string.

36. Binary rep of next greatest number

37. 