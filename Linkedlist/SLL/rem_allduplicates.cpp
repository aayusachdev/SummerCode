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
    point->next= NULL;
    if(head==NULL)
        {
            head= point;
            return;
        }
    lnode* last= head;
    while(last->next!= NULL)
    {
        last= last->next;
    }
    last->next= point;
    
}

void  printlist(struct node* point)
{
    while(point!= NULL)
    {
        cout<<point->data<<"    ";
        point= point->next;
    }

}

void rem_allduplicates(struct node** head)
{
    if(head==NULL)
        return;
    struct node* prev, *curr;
    curr= *head;
    prev= *head;
    lnode *dummy= *head;
    while(curr->next!= NULL)
    {   
    }
}

int main(int argc, char const *argv[])
{
    lnode* head= NULL;
    pushelement(head,11);
    pushelement(head,22);
    pushelement(head,22);
    pushelement(head,32);
    pushelement(head,120);
    pushelement(head,120);
    printlist(head);cout<<endl;
    rem_allduplicates(&head);
    printlist(head);
    return 0;
}
