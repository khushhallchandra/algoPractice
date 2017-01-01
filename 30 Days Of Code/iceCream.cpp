// https://www.hackerrank.com/challenges/ctci-ice-cream-parlor
#include <bits/stdc++.h>

using namespace std;

int cost[10000];
int costCopy[10000];

int main(){
	int t, n, m;
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i=0; i<n; i++)
			cin>>cost[i];
		std::copy(std::begin(cost), std::end(cost), std::begin(costCopy));
		sort(cost, cost+n);
		int id1=-1, id2=-1, temp;
		for(int i =n-1; i>=0; i--){
			temp = m-cost[i];
			if(binary_search(cost,cost+i,temp)){
				cout<<cost[i]<< m-cost[i];
				break;
			}
		}

		for(int i=0; i<n; i++){
			if(costCopy[i] == temp && id1!=-1)
				id1 = i;
			if(costCopy[i] == m-temp && id1!=i)
				id2 = i;
		}
		cout<<id1<<" "<<id2<<"\n";
	}
	return 0;
}
