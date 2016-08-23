// https://www.hackerrank.com/challenges/sherlock-and-array

#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int T,N,temp;
    cin>>T; 
    while(T--){
    	cin>>N;
    	int check = 0;
    	vector<int> vec(N),cSum(N);
    	cin>>temp;
    	vec[0] = temp;
    	cSum[0] = temp;
    	for(int i=1;i<N;i++){
    		cin>>temp;
    		vec[i] = temp;
    		cSum[i] = cSum[i-1] + temp;
    	}
    	if(N==1){
    		cout<<"YES\n";
    		continue;
    	}
    	for(int i=1;i<N-1;i++){
    		if(cSum[i-1] == cSum[N-1]-cSum[i]){
    			check = 1;
    			break;
    		}
    	}
    	if(check)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
    return 0;
}