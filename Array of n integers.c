#include <stdio.h>
#include <stdlib.h>
int a[20],elem,pos;
int n=0;
void create();
void insert();
void delete();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\n enter ypur choice:");
        printf("\n 1.create\n 2.insert\n 3.delete\n 4.display\n 5.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
            break;
            case 2:insert();
            break;
            case 3:delete();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            default:printf("\n invalid choice");
        }
    }
}
void create()
{
    printf("\n enter the number of elements:");
    scanf("%d",&n);
    printf("\n enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}
void display()
{
    if(n==0)
    {
        printf("\n no elements to be display ");
        return;

    }
    printf("\n array elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void insert()
{
    if(n==20)
    {
        printf("array is full");
        return;
    }
    printf("\n enter the position you want to enter:");
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("\n invalid position");
    }
    else
    {
        printf("\n enter the element u want to insert:");
        scanf("%d",&elem);
        for(int i=n-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=elem;
        n=n+1;
        display();
    }



}
void delete()
{ if(n==0)
{
    printf("\n array is empty");
    return;
}
else
{
    printf("\n enter a position u want to delete the element:");
    scanf("%d",&pos);
    if(pos<0||pos>=n)
    {
        printf("\n invalid position");
    }
    else
    {
        elem=a[pos];
        printf("\n delete item is %d",elem);
        for(int i=pos;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        display();

    }
}

}
.
