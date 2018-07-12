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
    point->next= head;
    head= point;
}

void  printlist(struct node* point)
{
    while(point!= NULL)
    {
        cout<<point->data<<"    ";
        point= point->next;
    }

}

int looplength(struct node* link)
{
    int res=1;
    lnode* temp= link;
    while(temp->next!=link)
    {
        res++;
        temp= temp->next;
    }
    return res;
}
void detectloop(struct node* head)
{
    lnode* slow, *fast;
    if(head==NULL)
        return;
    slow= head;
    fast= head;
    while(fast!=NULL && fast->next!=NULL && slow)
    {
        fast= fast->next->next;
        slow= slow->next;
        if(fast==slow)
        {
            printf("Loop found");
            cout<<endl<<"Length: "<<looplength(slow);
            return;
        }
    }
    return;
}

int main(int argc, char const *argv[])
{
    lnode* head= NULL;
    pushelement(head,1);
    pushelement(head,2);
    pushelement(head,3);
    pushelement(head,4);
    pushelement(head,5);
    pushelement(head,6);

    head->next->next->next->next->next= head;
    
    detectloop(head);
    
    return 0;
}
