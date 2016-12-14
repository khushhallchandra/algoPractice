// https://www.hackerrank.com/challenges/sherlock-and-cost

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n;
    int B[100000], table[100000][2];
    cin>>t;
    while(t--){
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>B[i];

        table[0][0] = 0;
        table[0][1] = 0;

        for (int i=1;i<n;i++){
            table[i][0] = max(table[i-1][0], table[i-1][1] + (B[i-1]-1));
            table[i][1] = max(table[i-1][0] + B[i] - 1, table[i-1][1] + abs(B[i] - B[i-1]));
        }
        cout<<max(table[n-1][0], table[n-1][1])<<endl;
    }
    return 0;
