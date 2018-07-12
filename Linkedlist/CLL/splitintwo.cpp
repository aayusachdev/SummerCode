#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}lnode;

void addenode(struct node** last, int ele)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data= ele;
    if(*last==NULL)
    {
        temp->next= temp;
        *last= temp;
        return;
    }
    temp->next= (*last)->next;
    (*last)->next= temp;
}

void traverseforprint(struct node* last)
{
    struct node* temp= last;
    if(last==NULL)
        return;
    temp= last->next;
    do{
        cout<<temp->data<<"   ";
        temp=temp->next;
    }while(temp!=last->next);

}

void splitintwo(struct node* head, struct node** head1, struct node** head2)
{
    struct node* fast, *slow;
    fast= slow= head;
    if(head)
    {
        return;
    }
    while(fast->next!= head && fast->next->next!= head )
    {
        fast= fast->next->next;
        slow= slow->next;
    }

    // even nodes shift fast by 1 node
    if(fast->next->next==head)
    {
        fast= fast->next;
    }
    *head1= head;
    if(head->next!= head)
    *head2= slow->next;

    fast->next= slow->next;

    slow->next= head;




}
int main(int argc, char const *argv[])
{
    struct node* last= NULL;
    addenode(&last,1);
    addenode(&last,2);
    addenode(&last,3);
    addenode(&last,4);
    addenode(&last,5);
    struct node* head= last->next;
    struct node *head1= NULL;
    struct node *head2= NULL;  
    splitintwo(head,&head1,&head2);
    traverseforprint(head1);cout<<endl<<endl;
     traverseforprint(head2);
    return 0;
}
