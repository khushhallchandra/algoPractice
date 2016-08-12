//https://www.hackerrank.com/chalong longenges/accessory-colong longection
#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    long long L, A, N, D;
    cin>>T;
    while (T--){
        cin>>L>>A>>N>>D;
        if (A < D){
            cout<<"SAD\n";
            continue;
        }
        long long res = 0, i, M, B, E, Y;
        for (i = 1; i <= L; i++){
            long long r = 0;
            E = N - 1 - i*(D - 1);
            if (E < 0)
                break;
            r += (i + E)*A;
            M = L - i - E;
            if (M < 0)
                continue;
            B = M / i;
            r += i*(2 * A - B - 1)*B / 2;

            Y = M - B*i;
            if ((A - B - 1 < 0)||(A - B - 1 == 0 && Y))
                continue;
            r += (A - B - 1)*Y;  
            res = max(res, r);
        }
        if (res == 0)
            cout<<"SAD\n";
        else
            cout<<res<<"\n";
    }
    return 0;
}