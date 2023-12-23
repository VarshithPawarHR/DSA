#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct node
{
    int info;
    struct node *link;
};
typedef struct node*NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
void freenode(NODE x)
{
    free(x);
}
NODE insertrear(NODE first,int item)
{
    NODE temp,cur;
    temp=getnode();
    temp->info=item;
    temp->link=NULL;
    if(first==NULL)
        return temp;
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;

    }
    cur->link=temp;
    return first;
}
NODE deletefront(NODE first)
{
    NODE cur,temp;
    if(first==NULL)
    {
        printf("\n the queue is empty");
        return first;
    }
    temp=first;
    temp=temp->link;
    printf("%d",first->info);
    freenode(first);
    return temp;

}

void display(NODE first)
{
    NODE temp,cur;
    int count=0;
    if(first==NULL)
    {
        printf("\n queue is empty");
        return first;
    }
   first=temp;
   while(temp!=NULL)
   {
       printf("\n delete node is %d",temp->info);
       temp=temp->link;
       count++;

   }
   printf("\n the total count of the nodes are: %d",count);
   printf("\n");

}
