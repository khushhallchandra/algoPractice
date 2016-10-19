// Given a two strings S and T, find count of distinct occurrences of T in S as a subsequence.
#include <bits/stdc++.h>

using namespace std;
 
int countSubseqence(string S, string T)
{
    int m = T.length(), n = S.length();
 
    if (m > n)
        return 0;

    int count[m + 1][n + 1];

    for (int i = 1; i <= m; i++)
        count[i][0] = 0;

    for (int j = 0; j <= n; j++)
        count[0][j] = 1;

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (T[i - 1] != S[j - 1])
                count[i][j] = count[i][j - 1];
            else
                count[i][j] = count[i][j - 1] + count[i - 1][j - 1];
        }
    }

    return count[m][n] ;
}
 
int main(){
    string T = "ch";
    string S = "checheche";
    cout << countSubseqence(S, T) << endl;
    return 0;
}