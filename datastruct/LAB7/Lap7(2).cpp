#include <stdio.h>
#define MAX 5
void breadth_first_search(int adj[][MAX],int visited[],int start)
{
    int queue[MAX];
    int rear = -1;
    int front = -1;
    int i;
    queue[++rear] = start;
    visited[start] = 1;
    while (rear != front){
        start = queue[++front];
        printf("%c\t",start + 65);
        for (int i = 0; i < MAX; i++) {
            if (adj[start][i] == 1 && visited[i] == 0){
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}
void depth_first_search(int adj[][MAX],int visited[],int start)
{
    int stack[MAX];
    int top = -1;
    int i;
    printf("%c \t",start + 65);
    visited[start] = 1;
    stack[++top] = start;
    while (top != -1){
        start = stack[top];
        for ( i = 0; i < MAX; i++) {
            if (adj[start][i] && visited[i] == 0){
                stack[++top] = i;
                printf("%c \t",i + 65);
                visited[i] = 1;
                break;
            }
        }
        if (i == MAX)
            top--;
    }
}
int main() {
    int visited[MAX] = {0};
    int adj[MAX] [MAX],i,j;
    printf("Enter the adjacency matrix: ");
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            scanf("%d",&adj[i][j]);
            printf("BFS Traversal: ");
            breadth_first_search(adj,visited,0);
            printf("\n");
            for (int i = 0; i < MAX; i++) 
                visited[i] = 0;

                printf("DFS Traversal: ");
                depth_first_search(adj,visited,0);
                printf("\n");
                return 0;


}
