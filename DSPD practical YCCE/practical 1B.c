/* Write a program to implement a Binary Search algorithm. */

#include <stdio.h>

int main() {
    int sorted_list[] = {10, 22, 35, 40, 51, 68, 77, 83, 90, 100};
    int size = sizeof(sorted_list) / sizeof(sorted_list[0]);
    int key;
    int i;
    
    printf("Sorted list is: ");
    for(i = 0; i < size; i++) {
        printf("%d ", sorted_list[i]);
    }
    printf("\n");

    printf("Enter a number to search for: ");
    scanf("%d", &key);
    
    int start = 0;
    int end = size - 1;
    int found_index = -1; /* Use -1 to mean 'not found' */

    while (start <= end) {
        int mid = start + (end - start) / 2;

        printf("Examining midpoint index %d: value %d\n", mid, sorted_list[mid]);

        if (sorted_list[mid] == key) {
            found_index = mid; /* Key is found! Store the index */
            break;             /* Stop the loop */
        }

        if (key > sorted_list[mid]) {
            start = mid + 1;
            printf("Key > midpoint. New start index: %d\n", start);
        }
        else {
            end = mid - 1;
            printf("Key < midpoint. New end index: %d\n", end);
        }
    }


    if (found_index != -1) {
        printf("Success: Found value %d at index %d\n", key, found_index);
    } else {
        printf("Failure: Value %d not found in the list.\n", key);
    }

    return 0;
}

/*
Sample Output:
Sorted list is: 10 22, 35, 40, 51, 68, 77, 83, 90, 100
Enter a number to search for: 77
Examining midpoint index 4: value 51
Key > midpoint. New start index: 5
Examining midpoint index 7: value 83
Key < midpoint. New end index: 6
Examining midpoint index 6: value 77
Success: Found value 77 at index 6

*/
