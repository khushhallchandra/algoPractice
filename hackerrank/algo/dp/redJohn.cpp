// https://www.hackerrank.com/challenges/red-john-is-back
#include <bits/stdc++.h>

using namespace std;

int sieveOfEratosthenes(int n){
    vector <bool> prime(n+1,1);
    for (int p=2; p*p<=n; p++){
        if (prime[p] == 1){
            for (int i=p*2; i<=n; i += p)
                prime[i] = 0;
        }
    } 
    int count =0;
    for (int p=2; p<=n; p++)
       if (prime[p]==1)
          count += 1;
    return count;
}

int count(int n){
    int dp[n+1];
    dp[0] = 0;
 
    for (int i=1; i<=n; i++){
        if (i >= 1 && i <= 3)
            dp[i] = 1;
        else if (i==4)
            dp[i] = 2 ; 
        else
            dp[i] = dp[i-1] + dp[i-4];
    } 
    return dp[n];
}

int main(){
	int T,N,temp;
	cin>>T;
	while(T--){
		cin>>N;
		cout<<sieveOfEratosthenes(count(N))<<endl;
	}
    return 0;
}