#include <stdio.h>

typedef struct {
    char name [20];
    char student_id [11]; // Assuming up to 10 digits.
    unsigned mark;
} student;

void printfunc(int arr) {
    printf("-------------\n");
    printf("Student name: %s\n", arr.name);
    printf("Student ID: %s\n", arr[x].student_id);
    printf("Final mark: %u\n", arr[x].mark);
}

int main () {
    int number_of_students = 10, i;
    student students [] = {...}; // Initialisation goes here.
    for (i = 0; i < number_of_students; i++) {
        printf("-------------\n");
        printf("Student name: %s\n", students[i].name);
        printf("Student ID: %s\n", students[i].student_id);
        printf("Final mark: %u\n", students[i].mark);
    }
    printf("-------------\n");
    return 0;
}