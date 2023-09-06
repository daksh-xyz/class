#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st {
    char student_name[50];
    int student_marks;
    struct st *next;
}*head = NULL;
void main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    head = (struct st *)malloc(sizeof(struct st));
    if (head == NULL) {
        printf("Memory can't be allocated\n");
        return;
    } else {
        struct st *curr = head;
        printf("Enter the student name and marks: ");
        scanf("%s %d", curr->student_name, &curr->student_marks);
        curr->next = NULL;

        for (int i = 1; i < n; i++) {
            struct st *new = (struct st *)malloc(sizeof(struct st));
            if (new == NULL) {
                printf("Memory can't be allocated\n");
                return;
            }
            printf("Enter the student name and marks: ");
            scanf("%s %d", new->student_name, &new->student_marks);
            new->next = NULL;
            curr->next = new;
            curr = new;
        }
    }
    struct st *curr = head;
    printf("\nStudent List:\n");
    int i=1;
    while (curr != NULL) {
        printf("Student count: %d, Name: %s, Marks: %d\n", i, curr->student_name, curr->student_marks);
        i++;
        curr = curr->next;
    }
}

// write a program to insert a new node at a given position
// WAP to insert a node after a given data...
// Delete a node from list