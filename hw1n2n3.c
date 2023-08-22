#include<stdio.h>
int sumOfElements(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int largestElement(int *arr, int n){
    int max= arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int big, size, total, choice=0;
    printf("Enter size of array: ");
    scanf("%d", &size);int array[size];
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("1. Find the sum of all elements of the array \n2. Find the largest element of the array\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        total = sumOfElements(array, size);
        printf("The sum of all elements of the array is: %d", total);
        break;
    case 2:
        big = largestElement(array, size);
        printf("The largest element of array is: %d", big);
        break;
    default:
        printf("Entered choice is invalid!!");
        break;
    }
    return 0;
}