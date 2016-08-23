#include <bits/stdc++.h>

using namespace std;

bool myComparison(const pair<int,int> &a,const pair<int,int> &b){
    return a.first<b.first;
}

int main(){
	int T,m,n,cost,len;
	cin>>T;
	while(T--){
		vector<pair<int,int> > vec;
		cin>>m>>n;
		for(int i=1;i<=n;i++){
			cin>>cost;
			if(cost<m)
				vec.push_back(make_pair(cost,i));
		}
		sort(vec.begin(),vec.end(),myComparison);
		len = vec.size();

		int i,j,a,b;
		for (i = 0; i < len; i++){
			for(j = i+1; j < len; j++){
				if(vec[i].first+vec[j].first == m){
					a=i;
					b=j;
				}
			}
		}
		i = vec[a].second;
		j = vec[b].second;
		if(i<j)
			cout<<i<<" "<<j<<"\n";
		else
			cout<<j<<" "<<i<<"\n";

	}
	return 0;
}