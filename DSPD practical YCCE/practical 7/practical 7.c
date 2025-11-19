// Aim: To perform BFS and DFS traversal on a 3x3 grid undirected graph starting from node 1.
// Question: (a) In what order are nodes marked as explored by BFS? (b) In what order are nodes marked as explored by DFS?

#include <stdio.h>

int arr[10][10], visited[10], n;

void DFS(int v)
{
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (arr[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

void BFS(int v)
{
    int queue[10], front = 0, rear = 0;

    printf("%d ", v);
    visited[v] = 1;
    queue[rear++] = v;

    while (front < rear)
    {
        v = queue[front++];

        for (int i = 1; i <= n; i++)
        {
            if (arr[v][i] == 1 && visited[i] == 0)
            {
                printf("%d ", i);
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("\nDFS Traversal: ");
    for (i = 1; i <= n; i++)
        visited[i] = 0;
    DFS(start);

    printf("\nBFS Traversal: ");
    for (i = 1; i <= n; i++)
        visited[i] = 0;
    BFS(start);

    return 0;
}

/* Sample output
Enter number of nodes: 4
Enter adjacency matrix:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Enter starting node: 1
DFS Traversal: 1 2 4 3 
BFS Traversal: 1 2 3 4 
*/