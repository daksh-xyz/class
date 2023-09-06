// A MENU DRIVEN PROGRAM TO PERFORM INSERTION DELETION AND CREATION OF A LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head = NULL;
void CreateList();
void DisplayList();
void InsertinList(int n, int data);
void DeleteList();
void DelfrmList();

void main(){
    int choice=0;
    printf("Welcome to my menu driven program...\n");
    do
    {
        printf("\nMenu:\n1. Create a 1D array\n2. Display the array\n3. Insert an element at a specific position\n4. Sort the array using Insertion Sort\n5. Exit\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input. Please enter a valid option (1-5).\n");
            while (getchar() != '\n');
            continue;
        }
        printf("\n");
        switch (choice)
        {
        case 1:
            CreateList();
            break;
        case 2:
            DisplayList();
            break;
        case 3:
            if (head == NULL) {
                    printf("The list is empty. Please create a list first.\n");
                } else {
                    int data, loc;
                    printf("Enter data to insert: ");
                    scanf("%d", &data);
                    printf("Enter location at which element is to be inserted: ");
                    scanf("%d", &loc);
                    InsertinList(data, loc);
                }
                break;
        default:
            printf("INVALID CHOICE! TRY AGAIN!");
            break;
        }
    } while (choice != 9);
    
}

void CreateList(){
    int n;
    printf("Enter amount of data to be stored: ");
    scanf("%d", &n);
    head = (struct node*)malloc(sizeof(struct node *));
    if(head == NULL){
        printf("OVERFLOW !");
        return;
    }
    else{
        struct node *curr = head;
        printf("Enter data: ");
        scanf("%d", &curr->data);
        curr->next = NULL;
        for(int i=1; i<n; i++){
            struct node *new = (struct node *)malloc(sizeof(struct node *));
            if(new == NULL){
                printf("OVERFLOW !");
                return;
            }
            printf("Enter data: ");
            scanf("%d", &new->data);
            new->next = NULL;
            curr->next = new;
            curr = new;
        } 
    }
}
void DisplayList(){
    struct node *curr = head;
    int i=1;
    while(curr != NULL){
        printf("%d. %d\n", i, curr->data);
        curr = curr->next;
        i++;
    }
}
void InsertinList(int data, int loc) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (loc == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct node *curr = head;
    int i = 1;

    while (i < loc - 1 && curr != NULL) {
        curr = curr->next;
        i++;
    }

    if (curr == NULL) {
        printf("INVALID LOCATION!\n");
        free(newNode);
        return;
    }

    newNode->next = curr->next;
    curr->next = newNode;
}