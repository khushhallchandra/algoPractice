#include<bits/stdc++.h>

using namespace std;

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int sum1=0, sum2=0, i, temp, max_ending_here = 0, allNeg=1,s= -10000;
		for(i=0;i<n;i++){
			cin>>temp;
			if(temp>0){
				sum2 += temp;
				allNeg = 0;
			}
			if(allNeg)
				s = (s>temp)?s:temp;

			max_ending_here += temp;
        	if (max_ending_here < 0)
            	max_ending_here = 0;
        	if (sum1 < max_ending_here)
            	sum1 = max_ending_here;
		}
		if(allNeg)
			cout<<s<<" "<<s<<"\n";
		else
			cout<<sum1<<" "<<sum2<<"\n";
	}
	return 0;
}