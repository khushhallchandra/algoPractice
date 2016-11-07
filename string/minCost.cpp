#include<bits/stdc++.h>

using namespace std;

int findMinCost(char X[], char Y[], int costX, int costY){
    int m = strlen(X), n = strlen(Y);

    int L[m+1][n+1];

    for (int i=0; i<=m; i++){
        for (int j=0; j<=n; j++){
            if (i == 0 || j == 0)
                L[i][j] = 0;
                 
            else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
 
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    int len_LCS = L[m][n];
    return costX * (m - len_LCS) + costY * (n - len_LCS);
}

int main(){
    char X[] = "ab";
    char Y[] = "cd";
    cout << findMinCost(X, Y, 10, 20);
    return 0;
}
