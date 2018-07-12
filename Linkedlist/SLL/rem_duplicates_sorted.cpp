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

void remduplicates(struct node* head)
{
    lnode* current= head;
    lnode *temp= NULL;
    if(head==NULL)
        return;
    while(current->next!=NULL)
    {
        if(current->data== current->next->data)
        {
            temp= current->next->next;
            free(current->next);
            current->next= temp;
        }
        else
        {
            current= current->next;
        }
    }
}

int main(int argc, char const *argv[])
{
    lnode* head= NULL;
    pushelement(head,11);
    pushelement(head,22);
    pushelement(head,32);
    pushelement(head,32);
    pushelement(head,120);
    pushelement(head,120);
    printlist(head);
    remduplicates(head);
    printlist(head);
    return 0;
}
