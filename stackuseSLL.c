#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;

};
typedef struct node *NODE;

NODE getnode()
{
    NODE X;
    X= (NODE)malloc(sizeof(struct node));
    if(X== NULL)
    {
        printf("NOI MEM SPACE");
    }
    return(X);
}

void freenode(NODE X)
{
    free(X);
}
NODE insertfront(NODE first, int value)
{
    NODE temp;
    temp =getnode();
    temp-> info = value;
    temp->link=NULL;
    if(first==NULL)
        return(temp);

    temp->link= first;
    return (temp);
}
NODE deletefront(NODE first)
{
NODE temp;
if(first==NULL)
{
    printf("stack is empty \n");
}
temp=first;
printf("delted element is %d \n",first->info);
freenode(first);
return(temp);
}
void display( NODE first)
{
    NODE cur;
    if(first==NULL)
        printf("stack is empty");
    if(first->link==NULL)
        printf("%d",first->info);
    else
    {
        printf("contents are : \n");
        cur=first;
        while(cur!=NULL)
        {
            printf("%d",cur->info);
            cur=cur->link;
        }
    }


}
int main()
{
    int choice,value;
    NODE first = NULL;
    while(1)
    {
        printf("enter your choice \n");
        printf("1.insert \n 2.delete \n 3.display \n 4.exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value you want to insert");
            scanf("%d", &value);
           first = insertfront(first,value);
            break;
        case 2:
          first= deletefront(first); break;
        case 3:
            display(first);break;
         case 4:
             exit(0);
        }
    }
    return 0;
}

