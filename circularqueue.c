#include <stdio.h>
#include <stdlib.h>
#define max 5

struct queue
{
    int rear;
    int front;
    int count;
    int q[max];
}s;
int main()
{
    int choice,value;
    s.rear=-1;
    s.front=0;
    s.count=0;
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
            insert(&s,value);
            break;
        case 2:
            delete(&s);
        case 3:
            display(&s);
         case 4:
             exit(0);
        }
    }
    return 0;

}

void insert(struct queue *s, int value)
{
    if(s->count ==  max)
    {
        printf("queue is full");
    }
    else
    {

        s->rear = (s->rear+1)%max;
        s->q[s->rear] = value;
        (s->count)++;

    }
}
void delete(struct queue *s)
{
    if(s->count==0)
    {
        printf("queue is empty");
    }
    else
    {
        (s->count)--;
        s->front= (s->front +1)%max;
        printf("deleted e;lement is %d", s->q[s->front]);
       
    }
}
void display(struct queue *s)
{
    if (s->count == 0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("contents of queue are: ");

        for (int i = 0; i <s->count; i++)
        {
            int x= s->q[s->front];
            s->front = (s->front + 1) % max;
            printf("%d ", x);
        }
        printf("\nnumber of elements are: %d\n", s->count);
    }
}
