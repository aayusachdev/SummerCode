#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}lnode;
void printlist(struct node* last)
{
    struct node* temp= last->next;
    if(last==NULL)
    {
        return;
    }
    do
    {
        cout<<temp->data<<" ";        
        temp= temp->next;
    }while(temp!=last->next );
}
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

void deletenode(struct node* head, int key)
{
    if(head==NULL)
    {
        return;
    }    
    struct node *curr= head, *prev;
    if(head->data==key)
    {
        if(head->next==head)
        {
            free(head);
            return;
        }
        // more than 1 nodes present
        else
        {
            prev= head;
            curr= head;
            while(prev->next!= head)
            {
                prev= prev->next;
            }
            prev->next= curr->next;
            free(curr);
            head= prev;
            return;
        }
    }
    while(curr->data!= key)
    {
        if(curr->next==head)
        {
            cout<<"Node absent";
            return;
        }
        prev= curr;
        curr=curr->next;
    }

    //if curr is first node
    // found the node to be deleted
    prev->next= curr->next;
    free(curr);

}

int main()
{
    struct node* last= NULL;
    addenode(&last,1);
    addenode(&last,2);
    addenode(&last,3);
    addenode(&last,4);
    addenode(&last,5);
    addenode(&last,6);
    printlist(last);cout<<endl;
    deletenode(last->next, 6);// first node not working
    printlist(last);
}