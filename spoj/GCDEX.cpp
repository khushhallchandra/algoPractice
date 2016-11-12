// http://www.spoj.com/problems/GCDEX/
#include<bits/stdc++.h>
#define MAX 1000001

using namespace std;

long long g[MAX];
int phi[MAX];

int main(){
	int i, j, n;

	for(i=2,phi[1]=1; i<MAX; i++){
		if(!phi[i]){
			phi[i] = i-1;
			for(j=(i<<1); j<MAX; j+=i){
				if(!phi[j])
                    phi[j] = j;
				phi[j] = phi[j]/i*(i-1);
			}
		}
	}

	for(i=1; i<MAX; i++)
		for(j=2; i*j<MAX; j++)
			g[i*j] += i*phi[j];

	for(i=2; i<MAX; i++)
		g[i] += g[i-1];

	while(1){
        cin>>n;
        if(n==0)
            break;
        cout<<g[n]<<endl;
    }

	return 0;
}
