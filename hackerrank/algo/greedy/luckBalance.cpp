//https://www.hackerrank.com/challenges/luck-balance

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, l, t, i, sum=0, count = 0;
	cin>>n>>k;
	vector<int> vec;
	for(i=0;i<n;i++){
		cin>>l>>t;
		if(t==0)
			sum+=l;
		else{
			vec.push_back(l);
			count++;
		}
	}
	sort(vec.rbegin(), vec.rend());
	if(k>count)
		k=count;
	for(i=0;i<k;i++)
		sum+=vec[i];
	for(i=k;i<count;i++)
		sum-=vec[i];
	cout<<sum;
	return 0;
}