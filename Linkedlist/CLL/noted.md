Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.
Advantages:
-> Any node can be starting  point.We can traverse the whole list by starting from any point. We just need to stop when the first visited node is visited again.
-> Useful for implementation of queue
-> Circular lists are useful in applications to repeatedly go around the list.
-> Circular Doubly Linked Lists are used for implementation of advanced data structures like Fibonacci Heap. 

-> INSERTION
    -> in an Empty list
    -> insertion at the beginning of the list
    -> at the end
    -> in between the nodes

-> Use last pointer for circular linked lists, instead of head

-> SPLIT CIRCULAR LISTS INTO 2
-> deletion in CLL