#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct myDict {
    char word[50];
    struct myDict* next;
} * head = NULL;

char word[50];
int count=20;

// Q1. Write a function(add_to_dic()) to add new word to the dictionary in a way that the final output should appear in lexicographic order.

void add_to_mydict(struct myDict** head, char* word) {
    struct myDict* myWord = (struct myDict*)malloc(sizeof(struct myDict));
    strcpy(myWord->word, word);
    myWord->next = NULL;
    if (*head == NULL || strcmp((*head)->word, word) > 0) {
        myWord->next = *head;
        *head = myWord;
        count++;
        return;
    }
    struct myDict* current = *head;
    while (current->next != NULL && strcmp(word, current->next->word) > 0) {
        current = current->next;
    }
    myWord->next = current->next;
    current->next = myWord;
}

void print(struct myDict *node) {
    while (node != NULL) {
        printf("%s --> ", node->word);
        node = node->next;
    }
    printf("NULL\n");
}

// Q2. Write a function(del_duplicate()) to delete all duplicate words from dictionary.

void del_duplicate(struct myDict** head){
    struct myDict* current = *head;
    struct myDict* next_next;
    if (current == NULL)
       return;
    while (current->next != NULL){
       if (strcmp(current->word, current->next->word)==0){
           next_next = current->next->next;
           free(current->next);
           current->next = next_next; 
       }
       else{
          current = current->next;
       }
    }
}

int main() {
    printf("Welcome to my menu-driven program...\n");
    int choice;
    do {
        printf("1. Add a new word\n2. Print dictionary\n3. Delete duplicates\n4. Exit\n");
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input. Please enter a valid option (1-5).\n");
            while (getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
                printf("Enter the word to add: ");
                scanf("%s", word);
                add_to_mydict(&head, word);
                printf("'%s' has been added to the dictionary.\n", word);
                break;
            case 2:
                print(head);
                break;
            case 3:
                if(count>=10){
                    del_duplicate(&head);
                    printf("Duplicates have been removed from the dictionary.\n");
                }
                else{
                    printf("Less than 10: %d\n", count);
                }
                break;
            case 4:
                return 0;
            default:
                printf("Enter a valid choice!\n");
                break;
        }
    } while (choice != 4);

    return 0;
}


