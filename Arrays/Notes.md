-> Collection of items stored at continuous memory locations. The idea is to store multiple items of same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array)

-> ADVANTAGES OF USING ARRAYS:
    Arrays allow random access of elements. This makes accessing elements by position faster.
    Arrays have better cache locality that can make a pretty big difference in performance.

-> // Array declaration by initializing elements 
int arr[] = {10, 20, 30, 40}
 
// Compiler creates an array of size 4. 
// above is same as  "int arr[4] = {10, 20, 30, 40}"

->  arr[3/2] = 2; // this is same as arr[1] = 2
->  No index out of bound checking in C
-> Arrays are always passed as pointer to functions.
-> Dynamically allocated arrays are allocated memory on heap, static or global arrays are allocated memory on data segment and local arrays are allocated memory on stack segment. 

-> sizeof should not be used to get number of elements in such cases. A separate parameter for array size (or length) should be passed to function.

-> An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2. 

-> The Best Solution is to do bitwise XOR of all the elements. XOR of all elements gives us odd occurring element. Please note that XOR of two elements is 0 if both elements are same and XOR of a number x with 0 is x.

-> use  s and end for printing the subarray in max subarray problem

->FIND THE MISSING NUMBER
  1) XOR all the array elements, let the result of XOR be X1.
  2) XOR all numbers from 1 to n, let XOR be X2.
  3) XOR of X1 and X2 gives the missing number.

-> Pivoted Binary search

-> ARRAY ROTATION:
      ->rotate(arr[], d, n)
        { reverse(arr[], 1, d) ;
          reverse(arr[], d + 1, n);
          reverse(arr[], l, n);
        }
    
      -> JUGGLING ALGO for array rotate, divide array in slots of gcd(d,n)
     
      -> BLOCKSWAP ALGO both approaches

-> 2 POINTER approach or meet in the middle algorithm for rotated array:
    -> l= (l+1)%n
    -> r= (r+n-1)%n;        

-> Pivot search in binary search
  -> if (arr[high] > arr[mid])
       return countRotations(arr, low, mid-1);
     return countRotations(arr, mid+1, high);

-> MAXIMIZE i*ARR[i]:
    
    -> Rj - Rj-1 = arrSum - n * arr[n-j]
    -> Compute Rj from Rj-1 and find the maxsum

-> FOR MULTIPLE ROTATIONS:
use a temp array of size 2n and quickly handle rotations.

Step 1 : Copy the entire array two times in temp[0..2n-1] array.
Step 2 : Starting position of array after k rotations in temp[] will be k % n. We do k
Step 3 : Print temp[] array from k % n to (k % n + n).

-> EQUILIBRIUM INDEX: leftsum == rightsum
    -> calc arrsum, find arrsum-arr[i]. if this is equalto leftsum, print index or else add arr[i] to leftsum
  
-> POSITION OF ELEMENT OF SORTED ARRAY OF INFINITE LENGTH:
  -> This means that the high index is unknown. So find the high index first.
     Once value of the high index is known, apply binary search to the array.

-> Floor and Celing using BINARY SEARCHING:

    -> else if(arr[mid] < x)
        if(mid + 1 <= high && x <= arr[mid+1])
                 return mid + 1;
        else
                 return ceilSearch(arr, mid+1, high, x);
      /*  If x is smaller than arr[mid], then either arr[mid] 
        is ceiling of x or ceiling lies in arr[mid-1...high] */   
        else
        {
            if(mid - 1 >= low && x > arr[mid-1])
                  return mid;
            else    
                  return ceilSearch(arr, low, mid - 1, x);
        }   

-> SEARCHING IN ARRAY IS MOSTLY AROUND BINARY SEARCH GET AS CLOSE TO O(logN)

-> TWO POINTER APPROACH, ONE POINTING AT THE FIRST ELEMENT AND OTHER AT THE LAST ELEMENT AND 
   MEET IN THE  MIDDLE APPROACH.

-> KADENES ALGORITHM:
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);   

-> MAJORITY ELEMENT USING HASHINNG AKA MAPS:
      -> unordered_map<int, int> mp;
      -> mp[arr[i]]++;
      -> for(auto it = mp.begin(); it!= mp.end();it++)
      ->  check(it->second)
      OR
      for(auto x: mp)
      { }

-> PEAK ELEMENT: greater than both neighbours
      -> linear search O(N)
      -> Modified binary search O(logN)

-> MAJORITY ELEMENT IN SORTED ARRAY: BINARY SEARCH

-> TWO REPEATING ELEMENTS:
    -> Take array elements as index and mark positive/negative
    -> or sum and product equations. find X-Y from X+Y and XY
    -> XOR bits

-> TRIPLE SUM 3 QUESTIONS AND SUB ARRAY WITH GIVEN SUM (BOTH)

-> 
