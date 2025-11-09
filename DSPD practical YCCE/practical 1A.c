/* Write a program to accept 'n' numbers into an array and then calculate the sum of numbers present in odd positions and
 even positions respectively. */

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int odd_sum = 0;
    int even_sum = 0;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            odd_sum += arr[i];
        } else {
            even_sum += arr[i];
        }
    }

    printf("Sum of numbers at odd positions: %d\n", odd_sum);
    printf("Sum of numbers at even positions: %d\n", even_sum);

    return 0;
}

/*
Sample Output:
Enter the number of elements (n): 4
Enter 4 numbers:
5
2
8
3
Sum of numbers at odd positions: 13
Sum of numbers at even positions: 5
*/
