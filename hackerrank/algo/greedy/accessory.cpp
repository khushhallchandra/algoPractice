//https://www.hackerrank.com/challenges/accessory-collection

#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, l, a, n, d, i, diff, sum,temp;
    cin >> T;
    while(T--){
        
        cin>>l>>a>>n>>d;
        sum = a;
        if(a<d){
            cout<<"SAD\n";
            continue;
        }
        else{
            diff = n/d;
            temp = n - (diff * d);
            l -= temp;
            sum += temp*a;
            for(i=1;i<=l;){
                sum += (a*(diff));
                a--;
                i += diff;
            }
            a++;
            if(i>l){
                sum -= (a*(i-l));
            }
            // cout<<i<<"aswd"<<<<"aw";
        }
        cout<<sum<<"\n";
    }
    return 0;
}