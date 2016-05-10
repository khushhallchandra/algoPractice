#include <iostream>

using namespace std;

int main(){
    int T, N, i, j, coins, val;
	long long dp[10001][2];
	cin>>T;
    for(i = 0; i < T; i++) {
		cin>>N;
        dp[0][0] = dp[0][1] = 0;
        for (j = 0; j < N; j++) {
			cin>>coins;
            dp[j+1][0] = max(dp[j][0], dp[j][1]);
            dp[j+1][1] = dp[j][0] + coins;
        }
		val = dp[N][0]>dp[N][1]?dp[N][0]:dp[N][1];
        cout<<"Case "<<i+1<<": "<<val<<endl;
    }
    return 0;
}
