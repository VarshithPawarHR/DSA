#include <stdio.h>
#include <stdlib.h>
#define MAX 8
struct stack
{
    int top;
    int i[MAX];
}s;
void push(struct stack *,int item);
void pop(struct stack *);
void display(struct stack *);
int main()
{
    int ch,item;
    s.top=-1;
    while(1)
    {
        printf("\n enter the choice:");
        printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n enter the item:");
            scanf("%d",&item);
            push(&s,item);
            break;
            case 2:pop(&s);
            break;
            case 3:display(&s);
            break;
            case 4:exit(0);
            default:printf("\n INVALID CHOICE");
        }
    }
}
void push(struct stack *s,int item)
{
    if(s->top==MAX-1)
    {
        printf("\nThe stack is full");
    }
    else
    {
        (s->top)++;
        s->i[s->top]=item;
    }
}
void pop(struct stack *s)
{
    int item;
    if(s->top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        item=s->i[s->top];
        printf("deleted is %d",item);
        (s->top)--;
    }
}
void display(struct stack *s)
{
    if(s->top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n stack contents are:");
        for(int i=0;i<=s->top;i++)
        {
            printf("%d\t",s->i[i]);
        }
        printf("\n");
    }
}
