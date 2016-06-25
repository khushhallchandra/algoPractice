#include<bits/stdc++.h>
#define MAX 100

using namespace std;

int dp[MAX][MAX][MAX][2];
// d = 0 indicates along row, d = 1 indicates along column.
int countPathsUtil(int i, int j, int k, int d){
    if (i < 0 || j < 0)
        return 0;
    if (i == 0 && j == 0)
        return 1;
    if (k == 0){
        if ((d == 0 && i == 0)||(d == 1 && j == 0)) return 1;
        return 0;
    }
    if (dp[i][j][k][d] != -1)
        return dp[i][j][k][d];
    if (d == 0)
        return dp[i][j][k][d] = countPathsUtil(i, j-1, k, 0) + countPathsUtil(i-1, j, k-1, 1);
    else
        return dp[i][j][k][d] = countPathsUtil(i-1, j, k, 1) + countPathsUtil(i, j-1, k-1, 0);
}

int countPaths(int i, int j, int k){
    if (i == 0 && j == 0)
          return 1;
    memset(dp, -1, sizeof dp);
    return countPathsUtil(i-1, j, k, 1) + countPathsUtil(i, j-1, k, 0);
}

int main(){
  int m = 3, n = 3, k = 2;
  cout << countPaths(m-1, n-1, k) << endl;
  return 0;
}
