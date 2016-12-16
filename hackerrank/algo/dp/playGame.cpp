// https://www.hackerrank.com/challenges/play-game
#include<bits/stdc++.h>

using namespace std;

long long int numbers[100001], table[100001];
int main() {

    int t, n;
    cin>>t;
    while(t--){
        cin >> n;
        for(int i = 0;i < n; i++)
            cin >> numbers[i];

        long long int sum = 0;
        table[n] = table[n+1] = table[n+2] = 0;

        for(int i = n-1; i >= 0; --i){
            sum += numbers[i];
            table[i] = sum - min(table[i+1], min(table[i+2], table[i+3]));
        }
        cout << table[0] <<"\n";
    }
    return 0;
}