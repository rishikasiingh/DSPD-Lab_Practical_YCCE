/*
Assume that you have a seven-slot closed hash
table (the slots are numbered 0 through 6) Write program to final hash table
that would result if you used the hash function h(k) = k mod 7.
*/

#include <stdio.h>

#define SIZE 7

int main() {
    int hash_table[SIZE];
    // keys[] = {10, 22, 31, 4, 15, 28, 17};
    int value,n,index;
    for (i = 0; i < SIZE; i++) {
        hash_table[i] = -1;
    }

    printf("Insert the number of nodes:\n");
    scanf("%d",&n)

    for(int i = 0; i < n; i++) {
        printf("Insert the key %d \n",i+1);
        scanf("%d",&value)
        index = value % SIZE;

        while (hash_table[index] != -1) {
            index = (index + 1) % SIZE;
        }
       hash_table[index]=value;
    } 
       

    printf("\nFinal Hash Table (Slots 0-6):\n");
    for (i = 0; i < SIZE; i++) {
        printf("Index  %d-->%d\n", i, hash_table[i]);
    }

    return 0;
}

/*
Sample Output:
Enter the number of keys
4
Enter key 1:10
Enter key 2: 20
Enter key 3: 5
Enter key 4: 15
Final Hash Table (Slots 0-6):
Index 0-->-1
Index 1-->15
Index 2-->-1
Index 3-->10
Index 4-->20
Index 5-->5
Index 6-->-1
*/
