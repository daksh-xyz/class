#include<stdio.h>
int insertEle(int *arr, int n, int pos){
    for(int i=n-1;i>=pos;i--){
        arr[i] = arr[i-1];
    }
}

int main(){
    int size, insert, choice=0, ele, pos=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter position at which new integer is to be inserted: ");
    scanf("%d", &pos);
    if(pos<0||pos>=size){
        pos = size-1;
    }
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    size++;
    printf("Enter new integer: ");
    scanf("%d", &ele);
    insert = insertEle(array, size, pos);
    array[pos-1]  = ele;
    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    
}