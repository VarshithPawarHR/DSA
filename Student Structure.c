#include <stdio.h>
#include <stdlib.h>

struct student {
    int rollno;
    char name[20];
    int sem;
    float m1;
    float m2;
    float m3;
};

void enter5studentdetail(struct student *s) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter the details of student %d\n", i + 1);
        printf("Enter the roll number: ");
        scanf("%d", &(s + i)->rollno);
        printf("Enter the name of student: ");
        scanf("%s", (s + i)->name);
        printf("Enter the semester: ");
        scanf("%d", &(s + i)->sem);
        printf("Enter the marks in subject 1: ");
        scanf("%f", &(s + i)->m1);
        printf("Enter the marks in subject 2: ");
        scanf("%f", &(s + i)->m2);
        printf("Enter the marks in subject 3: ");
        scanf("%f", &(s + i)->m3);
    }
}

void display(struct student *s) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("\nDetails of student %d\n", i + 1);
        printf("Roll number: %d\n", (s + i)->rollno);
        printf("Name: %s\n", (s + i)->name);
        printf("Semester: %d\n", (s + i)->sem);
        printf("Marks in subject 1: %.2f\n", (s + i)->m1);
        printf("Marks in subject 2: %.2f\n", (s + i)->m2);
        printf("Marks in subject 3: %.2f\n", (s + i)->m3);
    }
}

void studenttotal(struct student *s) {
    int i;
    float totalmarks;
    for (i = 0; i < 5; i++) {
        totalmarks = (s + i)->m1 + (s + i)->m2 + (s + i)->m3;
        printf("Total marks of student %d: %.2f\n", i + 1, totalmarks);
    }
}

void subjectwisetotmarks(struct student *s) {
    float totalm1 = 0, totalm2 = 0, totalm3 = 0;
    int i;
    for (i = 0; i < 5; i++) {
        totalm1 += (s + i)->m1;
        totalm2 += (s + i)->m2;
        totalm3 += (s + i)->m3;
    }
    printf("Total subject marks in subject 1: %.2f\n", totalm1);
    printf("Total subject marks in subject 2: %.2f\n", totalm2);
    printf("Total subject marks in subject 3: %.2f\n", totalm3);
}

int main() {
    struct student s[5];
    int choice;

    while (1) {
        printf("\nEnter the choice\n");
        printf("1. Enter 5 student details\n2. Display\n3. Student total\n4. Subject-wise total marks\n5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enter5studentdetail(s);
                break;
            case 2:
                display(s);
                break;
            case 3:
                studenttotal(s);
                break;
            case 4:
                subjectwisetotmarks(s);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}
