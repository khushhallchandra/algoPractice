// https://www.hackerrank.com/contests/monthly/challenges/alien-languages
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100002;
long long int MOD = 100000007;

int main(){
	int t, n, m;
	cin>>t;
	while(t--){
		cin >> n >> m;
		vector<long long int> table(m,0), g(20,0);
		long long int f[20][MAXN] = {0};

		int mid = int(n/2), len = 0;

		for (int i = 0; i <= mid; i++)
			f[0][i] = 1;

		for (int i = 1, p = 1; i <= m && p <= mid; i++){
			for (int j = p; j <= mid; j++) {
				f[i][j] = (f[i][j - 1] + f[i - 1][j >> 1]) % MOD;
			}
			len = i;
			p = p<<1;
		}

		for (int i = 1; i <= len + 1; i++)
			for (int j = mid + 1; j <= n; j++)
				g[i] = (g[i] + f[i - 1][j >> 1]) % MOD;

		table[0] = 1;

		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= len + 1; j++) {
				if (i < j) 
					continue;
				table[i] += table[i - j] * g[j];
				table[i] %= MOD;
			}
		}

		cout << table[m] << endl;
	}
	return 0;
}