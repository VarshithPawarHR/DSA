#include <stdio.h>
#include <stdlib.h>
#define max 5

int rear = -1;
int front = 0;
int a[max];
int count = 0;
int i;

void insert(int value)
{
    if(count ==max)
    {
        printf("queue is full");
    }
    else
    {
        rear = rear +1%max;
        count++;
        a[rear] = value;
        printf("insertion is successful");

    }
}
void delete()
{
    if(count == 0)
    {
        printf("queue is empty nothing to delete");
    }
    else
    {
        count--;
        front = front + 1%max;
        printf("deleted value is %d", a[front]);


    }
}
void display() {
    if(count == 0) {
        printf("queue is empty\n");
    }
    else {
        int j = front;
        for (i = 0; i < count; i++) {
            printf("%d ", a[j]);
            j = (j + 1) % max; // Move to the next element in the circular queue
        }
        printf("\n");
    }
}


int main()
{
    int choice,value;
    while(1)
    {
        printf("enter the choice \n");
        printf("1.insert \n2.delete \n3.display \n4.exit \n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1 : printf("enter the value you want to insert");scanf("%d",&value);insert(value);break;
            case 2: delete(); break;
            case 3:display(); break;
            case 4: exit(0);
            default : printf("invalid bsdk");
        }
    }
    return 0;
}
