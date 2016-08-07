#include <bits/stdc++.h>

using namespace std;
 
long long int count( vector<int> &S, int m, int n ){
    long long int i, j, c1, c2, table[n+1][m];

    for (i=0; i<m; i++)
        table[0][i] = 1;
  
    for (i = 1; i < n+1; i++){
        for (j = 0; j < m; j++){
            c1 = (i-S[j] >= 0)? table[i - S[j]][j]: 0;
            c2 = (j >= 1)? table[i][j-1]: 0;
            table[i][j] = c1 + c2;
        }
    }
    return table[n][m-1];
}

int main(){
	int n,m,i;
	cin>>n>>m;
	vector<int> coin(m);
	for(i=0;i<m;i++)
		cin>>coin[i];
    cout<<count(coin, m, n);
    return 0;
}