// https://www.hackerrank.com/challenges/mini-max-sum
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int min=1000000001, max=0, sum=0, k;
	for(int i=0; i<5; i++){
		cin>>k;
		sum+=k;
		if(k>max)
			max=k;
		if(k<min)
			min=k;
	}
	cout<<sum-max<<" "<<sum-min<<endl;
	return 0;
}