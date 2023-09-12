#include<stdio.h>
#include<stdlib.h>
struct node{
    char name[50];
    int marks;
    struct node* next;
}*head = NULL;
void CreateList();
void AppendList();
void DeleteList();
void DisplayList();

void main(){   
    int choice;
    printf("Welcome to my menu driven program...\n");
    do{
        printf("\n1. Create a new list\n2. Append a student to the existing list\n3. Delete student with minimum marks from the list\n4. Display List\n5. Exit\nEnter your choice: ");
        if(scanf("%d", &choice)!=1){
            printf("Invalid input !");
            while(getchar() != '\n');
                continue;
        }
        printf("\n");
        switch (choice)
        {
        case 1:
            CreateList();
            break;
        case 2:
            AppendList();
            break;
        case 3:
            DeleteList();
            break;
        case 4:
            DisplayList();
            break;
        case 5:
            printf("Exiting program...");
            return;
        default:
            break;
        }
    } while(choice != 5);
    struct node* current = head;
    while(current != NULL) {
        struct node* temp = current;
        current = current->next;
        free(temp);
    }
}

void CreateList(){
    int n;
    printf("Enter number of student data to be recorded: ");
    scanf("%d", &n);
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        printf("Memory not available !");
    }
    else{
        struct node *curr = head;
        printf("Enter name and marks of student: ");
        scanf("%s %d", &curr->name, &curr->marks);
        curr->next = NULL;
        for(int i=1; i<n; i++){
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            if (newNode == NULL) {
                printf("Memory not available !");
                return;
            }
            printf("Enter name and marks of student: ");
            scanf("%s %d", &newNode->name, &newNode->marks);
            newNode->next = NULL;
            curr->next = newNode;
            curr = newNode;
        }
    }
}

void DisplayList(){
    struct node* curr = head;
    while(curr != NULL){
        printf("%s %d\n", curr->name,curr->marks);
        curr = curr->next;
    }
}

void AppendList(){
    struct node *last = (struct node *)malloc(sizeof(struct node));
    if(last == NULL){
        printf("Memory not available !");
        return;
    }
    printf("Append student with name and marks: ");
    scanf("%s %d", &last->name, &last->marks);
    last->next = NULL;
    if (head == NULL) {
        head = last;
    } else {
        struct node *curr = head;
        while(curr->next != NULL)
            curr = curr->next;
        curr->next = last;
    }
}

void DeleteList() {
    struct node* curr = head;
    struct node* prev = NULL;
    int min = curr->marks;
    struct node* minNode = NULL;

    if (head == NULL) {
        printf("Enter a list first...");
        return;
    } else {
        while (curr != NULL) {
            if (min > curr->marks) {
                min = curr->marks;
                minNode = curr;
            }
            prev = curr;
            curr = curr->next;
        }

        if (minNode != NULL) {
            if (prev == NULL) {
                head = minNode->next;
            } else {
                prev->next = minNode->next;
            } 
            printf("Deleted student: %s with minimum marks: %d\n",minNode->name, min);
            free(minNode);
        } else {
            printf("No students found in the list.\n");
        }
    }
}