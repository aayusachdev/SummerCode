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

void swapnodes(struct node** head, int x, int y)
{       //1 check if equal
    if(x==y)
        return;
    //2 search for x, currX and prevX
    lnode* currx, *prevx= NULL;
    currx= *head;
    lnode* temp= NULL;
    while(currx!=NULL && currx->data!=x)
    {
          prevx= currx;
          currx= currx->next;
    }
     //2 search for y, curry and prevy
    lnode* curry, *prevy= NULL;
    curry= *head;
    while(curry!=NULL && curry->data!=y)
    {
          prevy= curry;
          curry= curry->next;
    }
    //3 check if anyone of them is not present in the list
    if(currx==NULL || curry== NULL)
    {
        return;
    }
    // x is not the head
    if(prevx!=NULL)
    {
        prevx->next= curry;
    }
    else
    {
        *head= curry;
    }

    //y is not  the head
    if(prevy!=NULL)
    {
        prevy->next=currx;
    }
    else
    {
        *head= curry;
    }
    // Swap next pointers
  temp= curry->next;
  curry->next= currx->next;
  currx->next= temp;




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
