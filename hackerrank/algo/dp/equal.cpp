// https://www.hackerrank.com/challenges/equal

#include <bits/stdc++.h>

using namespace std;

int calculate (int k){
    int x=0;
    if(k>=5){
        x = k/5;
        k = k%5;
    }
    if(k>=2){
        x += k/2;
        k = k%2;
    }
    x += k;
    return x;
}

int main(){
    int T, N, min;
    cin >> T;
    while(T--){
        cin>>N;
        int A[N];

        for(int i=0 ; i< N ; i++)
            cin>>A[i];
        min = *min_element(A, A+N);

        int sum[6];
        for(int j=0; j<=5 ; j++){
            sum[j]=0;
            for(int i=0; i< N; i++)
                sum[j] = sum[j] + calculate(abs(A[i] - (min-j)));
        }

        cout<<*min_element(sum,sum+6)<<endl;
    }
    return 0;
}
