// https://www.hackerrank.com/challenges/maximum-subarray-sum?h_r=next-challenge&h_v=zen

#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int T,N;
    cin>>T; 
    while(T--){
    	cin>>N;
        long long int M,temp,out=0;
        cin>>M;
    	vector<long long int> cSum(N+1);
    	cSum[0] = 0;
    	for(int i=1;i<=N;i++){
    		cin>>temp;
    		cSum[i] = cSum[i-1] + (temp%M);
    	}
        for(int i=1;i<=N;i++)   
            cSum[i] = cSum[i]%M;

        sort(cSum.begin(), cSum.end());

        cout<<cSum[N]<<"\n";

        // for(int l=1;l<=N;l++){
        //     for(int i=0;i<=N+1-l;i++){
        //         temp = (cSum[i+l] - cSum[i])%M;
        //         if(out<temp)
        //             out=temp;
        //     }
        // }
        // cout<<out<<"\n";
    }
    return 0;
}