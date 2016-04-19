#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int T, n, k, minDiff, a[20000];
	cin>>T;
	while(T--){
		cin>>n>>k;
		for(int i = 0; i < n; i++)
			cin>>a[i];
		sort(a,a+n);
		minDiff = a[k-1]-a[0];
		for(int i = 0; i + k <= n; i++)
			minDiff = min(a[i+k-1]-a[i], minDiff);
		cout<<minDiff<<endl;
	}
	return 0;
}
