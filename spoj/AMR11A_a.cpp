// Doing this problem starting from last [row][col]
#include <iostream>
#include <stdio.h>

using namespace std;
#define min(a,b) (a<b)?a:b;

int main(){
    int T, i, j, row, col;
    int s[501][501] = {0};
    cin>>T;
    while(T--){
        cin>>row>>col;

        for(i=1;i<=row;i++)
            for(j=1;j<=col;j++)
                cin>>s[i][j];

        s[row][col] = 1;

        for(i=row-1;i>0;i--){
            s[i][col]=s[i+1][col]-s[i][col];
            if(s[i][col]<1)
                s[i][col]=1;
        }

        for(j=col-1;j>0;j--){
            s[row][j]=s[row][j+1]-s[row][j];
            if(s[row][j]<1)
                s[row][j]=1;
        }
        for(i=row-1;i>0;i--){
            for(j=col-1;j>0;j--){
                s[i][j]=min(s[i+1][j],s[i][j+1])-s[i][j];
                if(s[i][j]<1)
                    s[i][j]=1;
            }
        }
        cout<<s[1][1]<<endl;
    }
    return 0;
}