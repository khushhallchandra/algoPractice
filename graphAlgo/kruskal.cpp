#include<vector>
#include<iostream>
#include <algorithm>

using namespace std;

#define V 5
#define edge pair< int,int >

vector< pair<int,edge> >G,MST;
vector<int> parent;

int find(int x){
    if(x!=parent[x])
        parent[x]=find(parent[x]);
    return parent[x];
}

int kruskal(int n,int e){
    for(int i=0;i<=n;i++)
        parent.push_back(i); 

    int u,v,total=0;
    sort(G.begin(),G.end());   

    for(int i = 0;i < e;i++){
        u = find(G[i].second.first);
        v = find(G[i].second.second);
        if((u) != (v)){
            MST.push_back(G[i]);
            total += G[i].first;
            parent[u] = parent[v];
        }
    }  
    return total; 
}

int main(){
    int e=0;
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0},
                      };
    for(int i = 0;i < V;i++){
        for(int j = i+1;j < V;j++){
            if(graph[i][j] != 0){
                G.push_back(pair<int,edge >(graph[i][j],make_pair(i,j))); 
                e++;
            }
        }
    }                          
    int tot = kruskal(V,e);
    cout<<"Edge   Weight\n";
    for(int i = 0;i < MST.size();i++){
        cout<<"("<<MST[i].second.first<<","<<MST[i].second.second<<")   "<<MST[i].first<<endl;
    }
    cout<<"Cost of MST is :"<<tot<<endl;     
    return 0;
}