//https://www.hackerrank.com/challenges/unbounded-knapsack
#include <bits/stdc++.h>

using namespace std;

int main(){
 
    int T;
    cin>>T;
    
    int n, k;
    while(T--){
    	vector<int> dp(n,0);
    	vector <int> a(n);
        cin >> n >> k;
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
