#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct queue
{
    int q[MAX];
    int front;
    int rear;
};

void insert(struct queue *, int value);
void deleteitem(struct queue *);
void display(struct queue *);

int main()
{
    struct queue s;
    s.front = 0;
    s.rear = -1;
    int choice, value;

    while (1)
    {
        printf("Choose an option:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the number you want to insert: ");
                scanf("%d", &value);
                insert(&s, value);
                break;
            case 2:
                deleteitem(&s);
                break;
            case 3:
                display(&s);
                break;
            case 4:
                exit(0);
                break;
        }
    }

    return 0;
}

void insert(struct queue *s, int value){
    if(s->rear==MAX-1){

        printf("queue is full");
    }
    else{
            (s->rear)++;

    }

}

void deleteitem(struct queue *q)
{

}

void display(struct queue *q)
{

}


