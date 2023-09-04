#include <stdio.h>

void inputStudents(char students[][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i]);
    }
}

void sortStudents(char students[][50], int n) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (students[i][k] == students[j][k] && students[i][k] != '\0' && students[j][k] != '\0') {
                k++;
            }
            if (students[i][k] > students[j][k]) {
                k = 0;
                while (students[i][k] != '\0' || students[j][k] != '\0') {
                    temp[k] = students[i][k];
                    students[i][k] = students[j][k];
                    students[j][k] = temp[k];
                    k++;
                }
            }
        }
    }
}

void displayStudents(char students[][50], int n) {
    printf("\nSorted Student List in Alphabetical Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, students[i]);
    }
}

void main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    char students[n][50];
    inputStudents(students, n);
    sortStudents(students, n);
    displayStudents(students, n);
}
