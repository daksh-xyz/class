#include<stdio.h>
#include<stdlib.h>
// WAF create_dll which create a list of n nodes 
// WAF to append a node at the beginning of the list
struct node{
    int data;
    struct node *left;
    struct node *right;
}*head = NULL;

void create_dll(){
    int n;
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter amount of data to be stored in your DLL: ");
    scanf("%d", &n);
    if(head == NULL){
        printf("overflow !");
        return;
    }
    else{
        struct node *curr = head;
        curr->left = NULL;
        for(int i = 1; i<n; i++){
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter data: ");
            scanf("%d", &newNode->data);
            curr->right = newNode;
            newNode->left = curr;
            curr = newNode;
            curr->right = NULL;
        }
    }
}
void DisplayList(){
    struct node *curr = head;
    int i=1;
    while(curr != NULL){
        printf("%d. %d\n", i, curr->data);
        curr = curr->right;
        i++;
    }
}

void main(){
    create_dll(); 
    DisplayList();
}