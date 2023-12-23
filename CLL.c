#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

typedef struct node *NODE;

NODE getnode() {
    NODE X;
    X = (NODE)malloc(sizeof(struct node));
    if (X == NULL)
        printf("Memory allocation failed\n");
    return (X);
}

void freenode(NODE X) {
    free(X);
}

NODE insertfront(NODE last, int value) {
    NODE temp;
    temp = getnode();
    temp->info = value;
    temp->link = NULL;
    if (last == NULL)
        last = temp;
    else {
        temp->link = last->link;
        last->link = temp;
    }
    return (last);
}

NODE insertrear(NODE last, int value) {
    NODE temp;
    temp = getnode();
    temp->info = value;
    temp->link = temp;
    if (last == NULL)
        last = temp;
    else {
        temp->link = last->link;
        last->link = temp;

    }
    return (temp);
}

NODE deleterear(NODE last) {
    NODE prev;
    if (last == NULL) {
        printf("List is empty\n");
        return last;
    }
    if (last->link == last) {
        printf("Deleted item is %d\n", last->info);
        freenode(last);
        return NULL;
    }
    else {
        prev = last->link;
        while (prev->link != last) {
            prev = prev->link;
        }
        prev->link = last->link;

        printf("Deleted element is %d\n", last->info);
        freenode(last);
        return prev;
    }
}

void display(NODE last) {
    NODE cur;
    int count = 0;

    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Contents of CLL are:\n");
    cur = last->link;
    while (cur != last) {
        count++;
        printf("%d\n", cur->info);
        cur = cur->link;
    }

    printf("%d\n", cur->info);
    count++;

    printf("Number of elements are %d\n", count);
}

NODE insertright(NODE last, int key, int value) {
    if (last == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    NODE cur = last->link;  // Start from the first node
    NODE temp;

    if (last->link == last&&last->info==key) {
        temp = getnode();
        temp->info = value;
        temp->link = last->link; // Link temp to itself
        last->link = temp;  // Update last's link to temp
        return temp;  // Return the newly inserted node
    }

    while (cur != last) {
        if (cur->info == key) {
            temp = getnode();
            temp->info = value;

            temp->link = cur->link;  // Link temp to the node after cur
            cur->link = temp;  // Link cur to temp
            return last;  // Return last as the list hasn't changed
        }
        cur = cur->link;
    }

    if (cur->info == key) {  // Check the last node separately
        temp = getnode();
        temp->info = value;

        temp->link = last->link;  // Link temp to the node after last
        last->link = temp;  // Link last to temp
        return last;  // Return last as the list hasn't changed
    }

    printf("Node with given value %d not found in the list\n", key);
    return last;  // Return last as the list hasn't changed
}

NODE deleteright(NODE last, int key) {
    if (last == NULL || last->link == last) {
        printf("List is empty or contains only one node\n");
        return last;
    }


    NODE cur, temp;
    cur = last->link;

    do {
        if (cur->info == key) {
            temp = cur->link;
            cur->link = temp->link;
            printf("Deleted element is %d\n", temp->info);
            freenode(temp);
            return last;
        }
        cur = cur->link;
    } while (cur != last);

    printf("Node with value %d not found in the list\n", key);
    return last;
}






int main() {
    int choice, value,key,delkey;
    NODE pos;
    NODE last = NULL;

    while (1) {
        printf("\nEnter your choice:\n");
        printf("1. Insert rear\n2. Delete rear\n3. Insert front\n4. Display\n5. Insert after \n6.delete right\n7. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter the value you want to insert: ");
            scanf("%d", &value);
            last = insertrear(last, value);
            break;

        case 2:
            last = deleterear(last);
            break;

        case 3:
            printf("Enter the value you want to insert: ");
            scanf("%d", &value);
            last = insertfront(last, value);
            break;

        case 4:
            display(last);
            break;

       case 5:
           printf("enter the nodevalue beside which u want to enter the node");
           scanf("%d",&key);
           printf("enter the value you want to insert");
           scanf("%d",&value);
           last = insertright(last,key,value);
           break;
       case 6 :
         printf("enter the nodevalue beside which u want to delete the node");
           scanf("%d",&delkey);

           last = deleteright(last,delkey);
           break;



        case 7:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
