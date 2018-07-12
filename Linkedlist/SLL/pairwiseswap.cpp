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
    struct node* ptr1, *ptr2;
    ptr1= head;
    while(ptr1!= NULL)
    {
        ptr2= ptr1;
        while(ptr2->next!= NULL)
        {
            if(ptr1->data== ptr2->next->data)
            {
                lnode *dup = ptr2->next;
                ptr2->next= ptr2->next->next;
                free(dup);
            }
            else
            {
                ptr2=ptr2->next;
            }
            ptr1=ptr1->next;
        }
    }
}

void swap(int *x, int *y)
{
    int temp= *x;
    *x= *y;
    *y= temp;

}
void swapnodes(struct node** head, int x, int y)
{  
    struct node* temp= *head;
    //travese only if >=2 nodes are left 
    while(temp && temp->next!= NULL)
    {
        swap(temp->data, temp->next->data);
        //move by 2
        temp= temp->next->next;
    }
}

int main(int argc, char const *argv[])
{
    lnode* head= NULL;
    pushelement(head,10);
    pushelement(head,15);
    pushelement(head,12);
    pushelement(head,13);
    pushelement(head,20);
    pushelement(head,14);
    printlist(head);
    cout<<endl;
    swapnodes(&head,12,20);
    printlist(head);
    return 0;
}
