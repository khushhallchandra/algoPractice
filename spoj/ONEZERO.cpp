#include <bits/stdc++.h>

using namespace std;

string bfs(int n){
  queue<pair<string,int> > q;
  pair<string,int> temp;
  q.push(make_pair("1",1));
  while(!q.empty()){
    temp = q.front();
    q.pop();
    
  }
  return ;
  
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
    cout<<bfs(n)<<endl;
  }
}
