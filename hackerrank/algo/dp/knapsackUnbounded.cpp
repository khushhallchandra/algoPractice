// https://www.hackerrank.com/challenges/unbounded-knapsack
#include<bits/stdc++.h>

using namespace std;

int table[2001][2001], a[2001];

int main(){
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for (int i=1;i<=n;i++)
            cin>>a[i];
        for (int i=0;i<2001;i++)
            table[0][i] = table[i][0] = 0;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=k;j++)
                if (j >= a[i])
                    table[i][j] = max(table[i-1][j], table[i][j-a[i]] + a[i]);
                else
                    table[i][j] = table[i-1][j];
        cout<<table[n][k]<<endl;
    }
    return 0;
}
