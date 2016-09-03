//https://www.hackerrank.com/challenges/unbounded-knapsack
#include <bits/stdc++.h>

using namespace std;

int main(){
 
    int T, n, k;;
    cin>>T;
    
    while(T--){
    	cin >> n >> k;
    	vector<int> dp(k+1,0), a(n);
        
        for(int i = 0;i < n; ++i)
            cin >> a[i];
       
        for(int i = 0; i < n; ++i)
            for(int j = 1; j <= k; ++j){
                if(j >= a[i])
                    dp[j] = max(dp[j-a[i]] + a[i], dp[j]);
            }
        cout << dp[k] << endl;
    }
    return 0;
}
