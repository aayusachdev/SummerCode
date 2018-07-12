#include <bits/stdc++.h>
using namespace std;

typedef struct Lnode
{
    int data;
    struct Lnode *next;
}node;

void printlist(struct Lnode* head)
{
    struct Lnode *n= head;

    while(n!= NULL)
    {
        cout<<n->data;
        n= n->next;
    }
}
int main(int argc, char const *argv[])
{
    struct Lnode *first;
    node *second= NULL;
    node *third= NULL;
    first= (struct Lnode*)malloc(sizeof(struct Lnode));
    second = (node*)malloc(sizeof(node));
    third= (node*)malloc(sizeof(struct Lnode));
    first->data= 1;
    first->next= second;

    second->data= 2;
    second->next= third;

    third->data= 3;
    third->next= NULL;

    printlist(first);
    return 0;
}
