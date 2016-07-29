#include<bits/stdc++.h>

int max(int a, int b){
    return (a > b)? a : b;
}

int lcs( char *str1, char *str2, int m, int n ){
    int L[m+1][n+1];
    int i, j;
  
    for (i=0; i<=m; i++){
        for (j=0; j<=n; j++){
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else
            if (str1[i-1] == str2[j-1])
                L[i][j] = 1 + L[i-1][j-1];

            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}

int main(){
  char str1[] = "AGGTAB";
  char str2[] = "GXTXAYB";
  
  int m = strlen(str1);
  int n = strlen(str2);
  
  cout<<lcs( str1, str2, m, n )<<endl;
 
  return 0;
}
