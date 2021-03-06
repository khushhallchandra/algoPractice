// Program to print DFS traversal from a given source vertex
#include<iostream>
#include <list>
 
using namespace std;
 
// This class defines a graph using list adjacency 
class Graph
{
    int V;    
    list<int> *adj;    
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);  
    void addEdge(int v, int w);
    void DFS(int v);  
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " " << endl;
 
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
void Graph::DFS(int v)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    DFSUtil(v, visited);
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(2, 2);
 
    cout << "Following is Breadth First Traversal starting from vertex 1" <<endl;
    g.DFS(1);
 
    return 0;
}