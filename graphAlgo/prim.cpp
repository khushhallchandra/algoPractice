// Used CLRS for reference Edition 2
#include <iostream>
#include <limits.h>

using namespace std;
 
#define V 5
 
int minKey(int key[], bool mstSet[]){
    int min = INT_MAX, min_ind;
 
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_ind = v;
 
    return min_ind;
}
 
int printMST(int parent[], int n, int graph[V][V]){
    cout<<"Edge   Weight\n";
    for (int i = 1; i < V; i++)
        cout<< "(" << parent[i] << "," << i << ")    " << graph[i][parent[i]]<<endl ;
}
 
void primMST(int graph[V][V]){
    int parent[V]; // it names the parent of v in the MST
    int key[V];   
    bool mstSet[V];  // Its like coloring the graph as mentioned in CLRS

    for (int i = 0; i < V; i++)
      key[i] = INT_MAX, mstSet[i] = false;
 
    key[0] = 0;     
    parent[0] = -1; 
 
    for (int count = 0; count < V-1; count++){
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        //updating key value for unexplored edges, adjacent to u
        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
                parent[v]  = u, key[v] = graph[u][v];
    } 
    printMST(parent, V, graph);
}
 
int main(){
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0},
                      };
    primMST(graph); 
    return 0;
}