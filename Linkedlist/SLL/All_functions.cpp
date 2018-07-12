#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}lnode;

void pushelement(lnode* &head, int ele)
{
    lnode *point= (struct node*)malloc(sizeof(lnode));
    point->data=ele;
    point->next= head;
    head= point;
}

void  printlist(struct node* point)
{
    while(point!= NULL)
    {
        cout<<point->data<<"    ";
        point= point->next;
    }

}

void deletion (lnode **head, int key)
{
    // 1 store head
    struct node* temp = *head;
    // 2 check for the header data
    if(temp!= NULL && temp->data== key)
    {
        *head= temp->next;
        free(temp);
        return;
    }
    // 3
    lnode *prev= NULL;  

    while(temp!=NULL && temp->data != key)
    {
        prev= temp;
        temp= temp->next;
    }

    if(temp==NULL)
    {
        return;
    }
    prev->next= temp->next;
    free(temp);

}

// DELETE AT A GIVEN POSITION

void deleteposition(struct node** head, int position)
{
    struct node* temp = *head;
    if(head== NULL)
    {
        return;
    }


    if(position==0)
    {
        *head= temp->next;
        free(temp);
        return; 
    }

    for(int i=0;i<position-1 && temp!= NULL; i++)
    {
        temp=temp->next;
    }
// temp->next is the node  to be deleted
    if(temp==NULL || temp->next==NULL)
    {
        return;

    }

    lnode* link= temp->next->next;
    free(temp->next);
    temp->next= link;

}

// DELETE THE LINKED LIST
void deletelinkedlist(struct node** head)
{
    if(*head==NULL)
    {
        return;
    }

    struct node* temp= *head;
    struct node *link= NULL;
    while(temp!= NULL)
    {
        link= temp->next;
        free(temp);
        temp= link;

    }
    *head= NULL;
}
// iterative
int listlength(struct node *head)
{
    struct node* temp= head;
    int count=0; 
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

//recursive
int listlength_rec(struct node *head)
{
    
  //  static int count=0; 
    if(head==NULL)
        return 0;
    return 1+ listlength_rec(head->next);
}

// search element iterative
bool search(lnode *head, int key)
{
    struct node* temp= head;
    while(temp!=NULL)
    {
        if(temp->data==key)
            return true;
        temp=temp->next;
    }
    return false;
}
//search element recursive

bool search_rec(lnode* head, int key)
{
    if(head==NULL)
        return false;
    if(head->data==key)
        return true;
    return search_rec(head->next, key);
}

//get nth node iterative

int getnthnode(struct node* head, int n)
{
    int count=0;
    struct node* temp= head;
    while(temp!=NULL)
    {
        if(count==n)
            return temp->data;
        count++;
        temp=temp->next;
    }
    assert(0);
}

// get nth node recursive

int getnthnode_rec(struct  node* head, int n)
{
    int count=0;
    if(count==n)
        return head->data;
    return getnthnode_rec(head->next, n-1);    
}

//NTH NODE FROM THE  END IF THE LIST: len-n+1 from the beginning

int getnthfromend(struct node*head,int n)
{
    int len=0;
    lnode*temp= head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++; // total length of the linked list
    }

    temp = head;
    for(int i=1;i<len-n+1; i++)
    {
        temp= temp->next;
    }
    return temp->data;
    if(n>len)
        return -1;
}
// two pointer approach for the nth node from the last

void printnthfromlast(struct node* head, int n)
{
    struct  node *ref, *main;
    ref= head;
    main= head;
    if(head==NULL)
        return;
    int count=1;
    while(count<=n)
    {
        if(ref==NULL)
            return;
        ref=ref->next;
        count++;
    }
    while(ref!=NULL)
    {
        main=main->next;
        ref=ref->next;
    }
    cout<<main->data;
    return;

}

void middlenode(struct  node *head)
{
    struct node *slow, *fast;
    slow=head;
    fast=head;
    if(head==NULL)
    return;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast= fast->next->next;

    }
    cout<<"Middle element: "<<slow->data;
}
int main(int argc, char const *argv[])
{
    lnode* head= NULL;
    pushelement(head,1);
    pushelement(head,2);
    pushelement(head,3);
    pushelement(head,4);
    pushelement(head,5);
    pushelement(head,6);
    pushelement(head,7);
    printlist(head);
   // deletion(&head,6);
   // cout<<endl<<getnthnode(head,3);
   // cout<<endl<<getnthnode_rec(head,3);
    cout<<endl<<getnthfromend(head,2);
    cout<<endl;
    printnthfromlast(head,2);
    cout<<endl;
    middlenode(head);
    return 0;
}
