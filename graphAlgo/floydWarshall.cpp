#include <bits/stdc++.h>

using namespace std;
#define MAX 1000000
#define V 4
 
void floydWarshall (int graph[][V]){
    int dist[V][V], i, j, k;

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = graph[i][j];
 
    for (k = 0; k < V; k++)
        for (i = 0; i < V; i++)
            for (j = 0; j < V; j++)
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == MAX)
                printf("%7s", "MAX");
            else
                printf ("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int graph[V][V] = { {0,   5,  MAX, 10},
                        {MAX, 0,   3, MAX},
                        {MAX, MAX, 0,   1},
                        {MAX, MAX, MAX, 0}
                      }; 
    floydWarshall(graph);
    return 0;
}
