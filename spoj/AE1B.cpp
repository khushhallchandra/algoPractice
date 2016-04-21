#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a[1000], n, k, s, i, tot, sum=0;
	cin>>n>>k>>s;
	for(i=0; i<n; i++)
        cin>>a[i];
	sort(a, a+n);
	tot = s*k;
	for(i=n-1; i>=0; i--){
		sum += a[i];
		if(sum >= tot)
            break;
	}
	cout<<n-i<<endl;
	return 0;
}
