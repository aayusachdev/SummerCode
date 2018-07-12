#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}lnode;

void pushelement(lnode** head, int ele)
{
    lnode *point= (struct node*)malloc(sizeof(lnode));
    point->data=ele;
    point->next= NULL;
    if(*head==NULL)
        {
            *head= point;
            return;
        }
    lnode* last= *head;
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

void reverselist(struct node** head)
{
    struct node* prev, *curr;
    prev= NULL;
    curr= *head;
    struct node* nextnode= NULL;
    while(curr!= NULL)
    {
        nextnode= curr->next;
        
        curr->next= prev;

        prev= curr;

        curr= nextnode;

    }
    *head= prev;

}

int main(int argc, char const *argv[])
{
    lnode* a= NULL;
    pushelement(&a,1);
    pushelement(&a,2);
    pushelement(&a,3);
    pushelement(&a,5);
    pushelement(&a,4);
    printlist(a);cout<<endl;
    reverselist(&a);
    printlist(a);cout<<endl;
    return 0;
}
