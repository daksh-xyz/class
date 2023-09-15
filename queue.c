#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int que[MAX];
int f=-1,r=-1;
void insert(){
    if(r == MAX-1){
        printf("Overflow !");
    }
    else if(f==-1 && r==-1){
        f=r=0;
        insert();
    }
    else{
        for(r;r<MAX;r++){
            printf("Enter a num: ");
            scanf("%d", &que[r]);
        }
    }
}
void delete(){
    if(f==-1|| f>r){
        printf("Underflow !");
    }
    else if(f==r){
        f=r=-1;
    }
    else{
        printf("How many elements do you want to delete? ");
        int n=1;
        scanf("%d", &n);
        for(int i=0; i<n;i++){
            f++;
        }
    }
}
void display(){
    if(f==-1||f>r){
        printf("No elements to display !");
    }
    for(int i=f; i<r; i++){
        printf("Element: %d ", que[i]);
    }
}
void main(){
    insert();
    display();
    delete();
    display();
}