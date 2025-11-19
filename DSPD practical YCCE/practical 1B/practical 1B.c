/* Write a program to implement a Binary Search algorithm.  */

#include <stdio.h>

int main() 
{
    int n, arr[100], search;
    int start = 0, mid, high, i, found = 0;

    printf("Enter the range of array: ");
    scanf("%d", &n);

    high = n - 1;

    printf("Enter the %d elements of sorted array:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &search);

    while(start <= high)
    {
        mid = (start + high) / 2;

        printf("Start = %d\n", start + 1);
        printf("Mid = %d\n", mid + 1);
        printf("End = %d\n", high + 1);

        if(arr[mid] == search)
        {
            printf("The element is found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(search < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if(!found)
    {
        printf("The element is not present in the array.\n");
    }

    return 0;
}

/*
Sample Output:
Enter the range of array: 5
Enter the 5 elements of sorted array:
2
3
6
8
9
Enter the element you want to search: 8

Start = 1
Mid = 3
End = 5

Start = 4
Mid = 4
End = 5

The element is found at position 4


*/
