#include <iostream>

using namespace std;

int main() {
    int T;
    cin>>T;
    int a[10000];
    while (T--) {
        int N;
        cin>>N;
        long long out = 0, sum = 0;
        for (int i = 0; i < N; i++) {
            cin>> a[i];
            out += i*(long long)a[i] - sum;            
            sum += a[i];
        }
        cout<<out<<endl;
    }
    return 0;
}
