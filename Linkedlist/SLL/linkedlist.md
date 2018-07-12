SINGLY LINKED LIST
Linear data structure, not stored contigous locations like array
Advantages over arrays
1) Dynamic size
2) Ease of insertion/deletion
Drawbacks:
1) Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists.
2) Extra memory space for a pointer is required with each element of the list.
3) Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

-> Function malloc is used to allocate a block of memory on the heap. The program accesses this block of memory via a pointer that malloc returns.

3 ways to pass the head to functions that require update of the head of the linked list like insertion, deletion etc.
    -> MAKE HEAD GLOBAL
    -> RETURN THE HEAD POINTER AS FUNCTION RETURNS
    -> USE DOUBLE POINTER FOR THE HEAD, TO UPDATE ITS VALUE. (PREFERRED)

-> INSERTING IN THE MIDDLE, PASS THE NODE AND NOT THE DOUBLE POINTER

->buffer3 = (int*) realloc (buffer2,500*sizeof(int));
  free (buffer3);

-> ** head or *&head 2 ways to pass

-> delete a position, temp-> next is the node to be deleted, iterate from 0 to < positon-1

-> NTH NODE FROM THE  END IF THE LIST:
    -> len-n+1 from the beginning
    -> 2 pointer approach, ref and main

-> MIDDLE ELEMENT:
    ->METHOD 1: count the  total nodes in a loop, then traverse till count/2
    ->METHOD 2: use 2 pointers both pointing to the head, slow and fast. slow moves by one and fast by two. 
                when fast reaches the end, slow points to the middle : *Tortoise and the Hare*
    ->METHOD 3: Initialize mid element as head and initialize a counter as 0. Traverse the list from head, while traversing increment the counter and change mid to mid->next whenever the counter is odd. So the mid will move only half of the total length of the list.

-> LOOP DETECTION:
    -> *Tortoise and Hare*
    -> using unordered_set< node*>s;
       
         if (s.find(h) != s.end())
            return true;
        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);
        h = h->next;
    ->Mark visited nodes

-> LOOP LENGTH:
    lnode* temp= link;
    while(temp->next!=link)
    {
        res++;
        temp= temp->next;
    }

-> unordered_set<int> seen for hashing of linked list
->rem all duplicates from sorted list

-> Sorting of lists: MERGE SORT O(nLOGn)
-> swap nodes in list

-> PASS BY REFERENCE:
    void swap(int *x, int *y);
    void swap(int &x, int &y);

-> INTERSECTION OF 2 SORTED LINKED LISTS

-> point of intersection:
    -> double loops
    -> (d1-d2) and then move the longer list parallely
    -> use a set for node hashing
    -> make first list circular, and problem reduces to finding a loop in second list

->REVERSE A LINKED LIST
    -> 3 pointer used, prev, curr, nextnode
    -> prev = nextnode= NULL
    ->while(curr!= NULL)
    {
        nextnode= curr->next;
        curr->next= prev;

        prev= curr;
        curr- nextnode;
    }

    -> RECURSIVE SOLUTION

->quicksort, palindrome, oddeven
