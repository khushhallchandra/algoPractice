// Program to print BFS traversal from a given source vertex

#include<iostream>
#include <list>
 
using namespace std;
// This class defines a graph using list adjacency 
class Graph
{
    int V;    
    list<int> *adj;
public:
    Graph(int V);  
    void addEdge(int v, int w);
    void BFS(int s);  
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
 
void Graph::BFS(int s)
{
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    list<int> queue;
 
    visited[s] = true;
    queue.push_back(s);
 
    list<int>::iterator i;
 
    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " "<< endl;
        queue.pop_front();

        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
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
    g.BFS(1);
 
    return 0;
}