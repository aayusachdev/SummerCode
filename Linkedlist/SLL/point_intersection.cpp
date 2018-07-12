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

int getcount(struct node* n)
{
    int count=0;
    lnode* temp= n;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int _getintersectionnode(int len, struct node* head1, struct node* head2)
{
    struct node* first= head1;
    struct node* second= head2;
    for(int i=0;i<len;i++);
    {
        if(first==NULL)
        {
            return -1;
            first= first->next;
        }
    }
    while(first!=NULL && second!=NULL)
    {
        if(first==second)
        {
            return first->data;
        }
        first=first->next;
        second= second->next;
    }
    return -1;
}
int intersection(struct node* a, struct node* b)
{
    int d1= getcount(a);
    int d2= getcount(b);
    if(d1-d2)
    {
        int len= d1-d2;
        return _getintersectionnode(len,a,b);
    }
    else
    {
        int len= d2-d1;
        _getintersectionnode(len, b,a);
    
    }


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
    int result= intersection(a,b);
    printf("Node is %d",result);
    return 0;
}
