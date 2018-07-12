/*
3 positions
1. at the front of the linked list
2. after a particular node
3. at the end
*/
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
void pushelement(struct node **head, int ele)
{ // step1 
    struct node* point= (struct node*)malloc(sizeof(struct node));
   //step2
    point->data= ele;
    //step3
    point->next= *head;
    //step4
    *head= point;
}

void appendend(struct node** head, int ele)
{
    // 1 new node
    struct node* new_node= (struct node*)malloc(sizeof(struct node));
    // 2 assign data
    new_node->data= ele;
    // 3. make it point to null  
    new_node->next= NULL;
    // 4 if linked list is empty, point the head to the new node
    if(*head == NULL)
       { *head= new_node;
        return;
       }

    struct node* last= *head;
    // 5 traverse till the end
    while(last->next!= NULL)
    {
        last= last->next;

    }  
    //6 change  the next of the last node
    last->next= new_node; 
}
void printlist(struct node* head)
{
    struct node *n= head;

    while(n!= NULL)
    {
        cout<<n->data<<"    ";
        n= n->next;
    }
}

void insertAfter(struct node* prev_node, int ele)
{
    // step 1 check if prev node  is null
    if(prev_node==NULL)
    { cout<<"cannot be null";
      return;
    }
    //step 2 allocate new node
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    //step 3 put the data
    newnode->data= ele;
    // step 4 next of new node point to next of prev 
    newnode->next= prev_node->next;
    //step 5 next of prev node as new node
    prev_node->next= newnode;    
}
int main()
{
    struct node *first, *second, *third;
    first= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node)); 
    first->data= 1;
    first->next= second;
    second->data= 2;
    second->next= third;
    third->data= 3;
    third->next= NULL;
    pushelement(&first, 0);
    printlist(first);
    insertAfter(second, 10);
    cout<<endl<<endl;
    printlist(first);
    appendend(&first, 100);
    printlist(first);
}