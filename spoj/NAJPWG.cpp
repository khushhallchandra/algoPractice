#include<iostream>

using namespace std;

long long arr[100001]={0};

void etf(){
	long long n, m, k, i;
	for(n=1;n<100001;n++){
		m=n, k=n;
		for(i=2;i*i<=m;i++){
			if (m%i==0) 
				k-=k/i; 
			while(m%i==0) 
				m/=i; 
		}		 
		if (m>1)
			k -= k/m; 
		arr[n] = arr[n-1]+n-k;
	 } 
}

int main(){
	long long T,n,c=1;
	etf();
	cin>>T;
	while(T--){
		cin>>n;
		cout<<"Case "<<c<<": "<<arr[n]<<"\n";
		c++;
	}
	return 0;
}