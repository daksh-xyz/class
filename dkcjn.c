#include <stdio.h>
#include <stdlib.h>

struct Student {
    int data;
    struct Student* next;
};

struct Student* head = NULL; // Use a pointer to the head of the list

void create_list(int n) {
    head = malloc(sizeof(struct Student)); // Allocate memory for the head node
    if (head == NULL) {
        printf("Memory not available...");
        return;
    }
    
    struct Student* curr = head;
    
    printf("Memory available.... Enter data: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &curr->data);
        if (i < n - 1) {
            curr->next = malloc(sizeof(struct Student)); // Allocate memory for the next node
            if (curr->next == NULL) {
                printf("Memory not available...");
                return;
            }
            curr = curr->next;
        } else {
            curr->next = NULL;
        }
    }
}

void DisplayList(int n) {
    struct Student* curr = head;
    for (int i = 0; i < n; i++) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    create_list(n);
    DisplayList(n);
    
    // Free allocated memory when done
    struct Student* curr = head;
    while (curr != NULL) {
        struct Student* temp = curr;
        curr = curr->next;
        free(temp);
    }
    
    return 0;
}
