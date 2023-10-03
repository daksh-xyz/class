#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head = NULL;

void create(){
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        printf("No space available");
        return;
    }
    else{
        struct node *curr = head;
        printf("Enter name and marks of student: ");
        scanf("%s %d", &curr->data);
        curr->next = NULL;
    }
}

void pop(){

}