#include<stdio.h>
void main(){
    int size,num;
    printf("Enter size o array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number to be deleted: ");
    scanf("%d", &num);
    for(int i=0; i<size; i++){
        if (arr[i]== num){
            for(int j = i; j<size; j++){
                arr[j] = arr[j+1];
            }
            size--;
            break;
        }
    }
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

}