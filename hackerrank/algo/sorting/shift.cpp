// https://www.hackerrank.com/challenges/insertion-sort
// Using BIT

#include<bits/stdc++.h>

using namespace std;

long long a[200009], b[200009], tree[200009];
 
void update(long long idx,long long val, int n){
    while(idx <= n){
        tree[idx] += val;
        idx += idx & -idx;
    }
}
 
long long query(long long idx){
    long long ret=0;
    while(idx > 0){
        ret += tree[idx];
        idx -= idx & -idx;
    }
    return ret;
}
 
int main(){
	int T,n;
	cin>>T;
	while(T--){
    	long long i;
    	cin>>n;
    	memset(tree, 0, sizeof(tree));
    	for(i = 0; i < n; i++){
        	cin>>a[i];
        	b[i] = a[i];    
    	}
	    sort(b, b+n);
	    for(i = 0; i < n; i++)
	    	a[i] = lower_bound(b, b+n, a[i]) - b + 1;

	    long long ans = 0;
	    for(i = n-1; i >= 0; i--){
	        ans += query(a[i] - 1);
	        update(a[i], 1,n);
	    }
	    cout<<ans<<"\n";
	}
    return 0;
}