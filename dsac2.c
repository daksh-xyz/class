#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position. Element not inserted.\n");
        return;
    }

    for (int i = *size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position -1] = element;
    (*size)++;
    printf("Element %d inserted at position %d.\n", element, position);
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void main() {
    int choice;
    int *p = &choice;
    int arr[100];
    int size = 0;

    do {
        printf("\nMenu:\n1. Create a 1D array\n2. Insert an element at a specific position\n3. Sort the array using Insertion Sort\n4. Display the array\n5. Exit\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input. Please enter a valid option (1-5).\n");
            while (getchar() != '\n');
            continue;
        }
        printf("\n");
        switch (choice) {
            case 1:
                printf("Enter the size of the array: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Enter element %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                if (size == 0)
                    printf("Error: Array is empty");
                else if (size < 100) {
                    int element, position;
                    printf("Enter the element to insert: ");
                    scanf("%d", &element);
                    printf("Enter the position to insert: ");
                    scanf("%d", &position);
                    insertElement(arr, &size, element, position);
                } else {
                    printf("Array is full. Cannot insert more elements.\n");
                }
                break;

            case 3:
                if(size>0){
                    insertionSort(arr, size);
                    printf("Array sorted using Insertion Sort.\n");
                }
                else{
                    printf("Error: Array is empty");
                }
                break;

            case 4:
                if(size == 0)
                    printf("Error: Array is empty");
                else
                    displayArray(arr, size);
                break;

            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;

        }
    } while (choice != 5);
}
