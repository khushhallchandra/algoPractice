#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<long long> fib;
    fib.push_back(0);
    fib.push_back(1);
    long long x;
    while(1){
        x = fib[fib.size()-2] + fib[fib.size()-1];
        if (x < 1000000000)
            fib.push_back(x);
        else
            break;
    }
    int T,n;
	cin>>T;
    while(T--){
        cin>>n;
        cout<<fib[n+2];
    }
    return 0;
}
