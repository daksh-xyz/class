#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head = NULL, *head1 = NULL;

int count = 0;
int count1 = 0;

void create_doubly(){
    int n;
    count = n;
    head = (struct node*)malloc(sizeof(struct node));
    if (head == NULL){
        printf("Memory not available !");
    }
    else{
        struct node *curr = head;
        printf("Enter number of data to be stored: ");
        scanf("%d", &n);
        printf("Enter data: ");
        scanf("%d", &curr->data);
        curr->next = NULL;
        curr->prev = NULL;
        for(int i = 1; i<n; i++){
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL){
                printf("Memory not available !");
                return;
            }
            printf("Enter data: ");
            scanf("%d", &newNode->data);
            newNode->next = NULL;
            newNode->prev = curr;
            curr->next = newNode;
            curr = newNode;
        }
    }
}

void display(){
    struct node *curr = head;
    while (curr != NULL)
    {
        printf("%d --> ", curr->data);
        curr=  curr->next;
    }
    printf("NULL\n");
}

void reverse(){
    struct node *previous = NULL;
    struct node *nex = head;
    while(nex != NULL){
        previous = nex->prev;
        nex->prev = nex->next;
        nex->next = previous;
        nex = nex->prev;
    }
    if (previous != NULL){
        head = previous->prev;
    }
}

void create_DLL(){
    printf("Entering data in second DLL...\n");
    int n;
    count1 = n;
    head1 = (struct node*)malloc(sizeof(struct node));
    if (head1 == NULL){
        printf("Memory not available !");
    }
    else{
        struct node *curr = head1;
        printf("Enter number of data to be stored: ");
        scanf("%d", &n);
        printf("Enter data: ");
        scanf("%d", &curr->data);
        curr->next = NULL;
        curr->prev = NULL;
        for(int i = 1; i<n; i++){
            struct node *newNode1 = (struct node *)malloc(sizeof(struct node));
            if(newNode1 == NULL){
                printf("Memory not available !");
                return;
            }
            printf("Enter data: ");
            scanf("%d", &newNode1->data);
            newNode1->next = NULL;
            newNode1->prev = curr;
            curr->next = newNode1;
            curr = newNode1;
        }
    }
}

void display1(){
    struct node *curr = head1;
    while (curr != NULL)
    {
        printf("%d --> ", curr->data);
        curr=  curr->next;
    }
    printf("NULL\n");
}

void merge(){

}

void main(){
    create_doubly();
    display();
    reverse();
    display();
    create_DLL();
    display1();
    printf("%d %d", count, count1);
}