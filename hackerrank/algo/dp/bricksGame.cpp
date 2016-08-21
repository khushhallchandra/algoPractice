//https://www.hackerrank.com/challenges/play-game

#include <bits/stdc++.h>

using namespace std;

int a[100005]; 
long long dp[100005]; 

int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        for (int i = 0; i < n; ++i) 
            cin>>a[i];

        long long sum = 0; 
        dp[n] = dp[n + 1] = dp[n + 2] = 0; 
        for (int i = n - 1; i >= 0; --i){ 
            sum += a[i]; 
            dp[i] = sum - min(min(dp[i + 1], dp[i + 2]), dp[i + 3]); 
        }
        cout<<dp[0]<<"\n"; 
    }
    return 0; 
}