//https://www.hackerrank.com/challenges/play-game

#include <bits/stdc++.h>

using namespace std;

int a[100005];
long long int sum[100005], dp[100005];

int main() {
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        for (int i = N - 1; i >= 0; i--)
            cin>>a[i];
        sum[0] = a[0];
        for (int i = 1; i < N; i++)
            sum[i] = sum[i-1] + a[i];

        dp[0] = sum[0];
        dp[1] = sum[1];
        dp[2] = sum[2];
        for (int i = 3; i < N; i++)
            dp[i] = max(sum[i]-dp[i-1],max(sum[i]-dp[i-2],sum[i]-dp[i-3]));

        cout<<dp[N-1]<<"\n";
    }
    return 0;
}
