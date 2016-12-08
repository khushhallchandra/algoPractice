#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	long long int x, y, z, a, b, dist, dist_sq;
	cin>>T;
	while(T--){
		cin>>x>>y>>z;
		dist_sq = x*x + y*y + 2*y*z;
		dist = (long long)sqrt(dist_sq);

		if(dist_sq * dist_sq != dist)
			cout"Not this time.\n";
		
		else{
			a = 2*(x*z + z*dist);
			b = 2*y + 4*z;
			if(a % b)
				cout<<"Not this time.\n";
			else
				cout<<(a/b)<<"\n";
		}
	}
	return 0;
}