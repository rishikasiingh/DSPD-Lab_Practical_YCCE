/* Write a program which creates a structure Student which must have the attribute Avg Marks with
 3 more attributes sort the list of the student in descending order using Bubble sort. */

#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int age;
    float avg_marks;
};

int main() {
    int n = 4,i,j;
    struct Student students[4] = {
        {101, "Rishika", 18, 85.5},
        {102, "janvi", 19, 92.0},
        {103, "bhumika", 18, 78.5},
        {104, "tanisha", 20, 92.5}
    };
    
    struct Student temp;

    printf(" Unsorted Student List \n");
    for ( i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Age: %d, Avg Marks: %.2f\n",
               students[i].roll_no, students[i].name, students[i].age, students[i].avg_marks);
    }

    for ( i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            
            if (students[j].avg_marks < students[j + 1].avg_marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\n Sorted Student List (Descending by Avg Marks) \n");
    for (i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Age: %d, Avg Marks: %.2f\n",
               students[i].roll_no, students[i].name, students[i].age, students[i].avg_marks);
    }

    return 0;
}

/*
Sample Output:
 Unsorted Student List 
Roll: 101, Name: Rishika, Age: 18, Avg Marks: 85.50
Roll: 102, Name: janvi, Age: 19, Avg Marks: 92.00
Roll: 103, Name: bhumika, Age: 18, Avg Marks: 78.50
Roll: 104, Name: tanisha, Age: 20, Avg Marks: 92.50

 Sorted Student List (Descending by Avg Marks) 
Roll: 104, Name: tanisha, Age: 19, Avg Marks: 92.50
Roll: 102, Name: janvi, Age: 20, Avg Marks: 92.00
Roll: 101, Name: bhumika, Age: 20, Avg Marks: 85.50
Roll: 103, Name: Rishika, Age: 18, Avg Marks: 78.50
*/
