#include<stdio.h>
void main(){
    int n;
    printf("Enter size of arra: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int pos = i;
        while(pos>0 && arr[pos]<arr[pos-1]){
            int temp = arr[pos];
            arr[pos] = arr[pos-1];
            arr[pos-1] = temp;
            pos--;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}