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

struct node* intersection(struct node* a, struct node* b)
{
    struct node *dummy= NULL;
    struct node **tail= &dummy;
   
    while(a!= NULL && b!= NULL)
    {
        if(a->data==b->data)
        {
            pushelement(tail, a->data);

            tail= &((*tail)->next);
            a=a->next;
            b=b->next;
        }
        else if(a->data > b->data)
        {
            b=b->next;
        }
        else
        {
            a=a->next;
        }
    }
    printlist(dummy);
    return dummy;

}

int main(int argc, char const *argv[])
{
    lnode* a= NULL;
    lnode* b= NULL;
    pushelement(&a,1);
    pushelement(&a,2);
    pushelement(&a,3);
    pushelement(&a,5);
    pushelement(&a,4);
    pushelement(&b,12);
    pushelement(&b,11);
    pushelement(&b,1);
    pushelement(&b,23);
    pushelement(&b,2);
    printlist(a);cout<<endl;
    printlist(b);cout<<endl;
    struct node* result= intersection(a,b);
    printlist(result);
    return 0;
}
