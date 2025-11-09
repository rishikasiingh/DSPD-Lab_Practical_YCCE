// Aim: To perform BFS and DFS traversal on a 3x3 grid undirected graph starting from node 1.
// Question: (a) In what order are nodes marked as explored by BFS? (b) In what order are nodes marked as explored by DFS?

#include <stdio.h>
#define N 9

int adj[N+1][N+1], visited[N+1], queue[N+1], stack[N+1];
int front=-1,rear=-1,top=-1;

void addEdge(int u,int v){ adj[u][v]=adj[v][u]=1; }

void bfs(int start){
    for(int i=1;i<=N;i++) visited[i]=0;
    front=rear=0; queue[rear]=start; visited[start]=1;
    printf("BFS: ");
    while(front<=rear){
        int node=queue[front++];
        printf("%d ",node);
        for(int i=1;i<=N;i++){
            if(adj[node][i] && !visited[i]){
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
    printf("\n");
}

void dfs(int start){
    for(int i=1;i<=N;i++) visited[i]=0;
    top=0; stack[top]=start; visited[start]=1;
    printf("DFS: ");
    while(top>=0){
        int node=stack[top--];
        printf("%d ",node);
        for(int i=N;i>=1;i--){
            if(adj[node][i] && !visited[i]){
                stack[++top]=i;
                visited[i]=1;
            }
        }
    }
    printf("\n");
}

int main(){
    for(int i=1;i<=9;i++){
        if(i%3!=0) addEdge(i,i+1);
        if(i+3<=9) addEdge(i,i+3);
    }
    bfs(1);
    dfs(1);
    return 0;
}

/*
Undirected Graph (3x3 Grid Layout):

1 — 2 — 3
|   |   |
4 — 5 — 6
|   |   |
7 — 8 — 9

Sample Output:
BFS: 1 2 4 3 5 7 6 8 9
DFS: 1 4 7 8 9 6 3 2 5
*/

