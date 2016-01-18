#include<bits/stdc++.h>
using namespace std;
 
int main(void){
	int cases, num, quo,next;
	long long int sum;
	cin>>cases;
	while(cases--){
		sum=0;
		cin>>num;
		for(int i=1;i<=num;){
			quo=num/i;
			next=num/(i+1);
			sum+=((long long)i*(quo-next)*(next+quo+1))/2;

			if(quo==next)
				i=num/quo;
			else
				i++;
		}
		sum%=1000000007;
		cout<<sum<<endl;
	}
	return 0;
}