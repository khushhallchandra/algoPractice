#include <bits/stdc++.h>

using namespace std;

string bfs(int n){
  queue<pair<string,int> > q;
  pair<string,int> temp;
  int val;
  q.push(make_pair("1",1));
  while(!q.empty()){
    temp = q.front();
    q.pop();
    string s = temp.first;
    int rem = temp.second;
    
    if(rem == 0)
    	return s;

    val = (rem*10)%n; 
    if(val == 0)
        return (s+'0');
    else
        q.push(make_pair(s+'0',val));

    val = (rem*10 + 1)%n;
    if(val == 0)
	return (s+'1');
    else
	q.push(make_pair(s+'1',val));
  }
}
int main(){
    int T,n;
    cin>>T;
    while(T--){
    	 cin>>n;
    	cout<<bfs(n)<<endl;
  }
}
