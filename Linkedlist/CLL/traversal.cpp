#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node* next;
}lnode;

void addtoempty(struct node **last,int  ele)
{
    if(*last!=NULL)
        return;
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data= ele;
    // Note : list was empty. We link single node
    // to itself    
    temp->next= temp;
    *last= temp;
}

void addbegin(struct node **last, int ele)
{
    // combined inseretion at the beginning and insertion in the empty list
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data= ele;
    if(*last==NULL)
    {
        temp->next= temp;
        *last= temp;
    }
    
    temp->next= (*last)->next;
    (*last)->next= temp;
}

void addintheend(struct node** last, int ele)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data= ele;
    temp->next= (*last)->next;
    (*last)->next= temp;
    (*last)= temp;

}

void addafter(struct node** last, int ele, int point)
{
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data= ele;
    temp->next= NULL;

    struct node* p= (*last)->next;
    do{
        if(p->data==point)
        {
            temp->next= p->next;
            p->next= temp;
            if(p==*last)
            {
                *last= temp;
            }
        }
        p= p->next;
    }while(p!= (*last)->next);

}
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

int nodecount(struct node* head)
{
    struct node* temp= head;
    int count=0;
    do{
        count++;
        temp= temp->next;
    }while(temp!= head);
    return count;

}  
void exchangenodes(struct node **head)
{
    struct node* sec_last= *head;
    while(sec_last->next->next!= NULL)
    {
        sec_last= sec_last->next;
    }
    sec_last->next->next= (*head)->next;
    
    (*head)->next= sec_last->next;

    sec_last->next=(*head);
    *head= (*head)->next;

}
int main()
{
    struct node* last= NULL;
    addtoempty(&last,1);
    addintheend(&last,2);
    addintheend(&last,3);
    addintheend(&last,4);
    addafter(&last,20,2);
    addintheend(&last,5);
    printlist(last);
    cout<<"Nodes: "<<nodecount(last->next);
    cout<<"exchange first and last nodes";
    exchangenodes(&(last->next));
    printlist(last);
}