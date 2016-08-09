//https://www.hackerrank.com/challenges/jim-and-the-orders

#include <bits/stdc++.h>

using namespace std;

bool myComparison(const pair<int,int> &a,const pair<int,int> &b){
       return a.second<b.second;
}

int main(){
	int n, t, d, i;
	cin>>n;
	vector<pair<int, int> > vec;
	for(i=0;i<n;i++){
		cin>>t>>d;
		vec.push_back(make_pair(i+1,t+d));
	}	
	sort(vec.begin(), vec.end(), myComparison);
	for(i=0;i<n;i++)
		cout<<vec[i].first<<" ";
	return 0;
}