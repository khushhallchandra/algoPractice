#include <bits/stdc++.h>

using namespace std;
#define MAX 1e8

int dijktra(vector<vector<pair<int, int> > > &graph, int n, int src, int dest){
	priority_queue<pair<int, int> >q;
	vector<int>cost(n+1, MAX);
	q.push(make_pair(src,0));
	cost[src] = 0;
}

int main(){
    int T, n, p, k, c;
    string name,s1,s2;
    cin>>T;
    while(T--){
        cin>>n;//number of cities
        map<string, int> city; //it is used to map the city name with a number
        vector<vector<pair<int, int> > > graph(n+1); // vector of "vector pair"
        for(int i=1; i<=n;i++){
        	cin>>name;
        	city[name] = i;
        	cin>>p;
        	while(p--){
                cin>>k>>c;
                graph[i].push_back(make_pair(k, c));
            }
        }                
		cin>>r;
		while(r--){
   		cin>>s1>>s2;
   		cout<<dijktra(graph, city[s1], city[s2])<<"\n";
  		}
 	}
 	return 0;        
}
