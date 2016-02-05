#include <iostream>

using namespace std;

bool islucky(int x) {
    int count = 0, p = 2;
    while (x > 1) {
        while (x % p)
            p++;
        count++; 
        if (count == 3)
            return true;
        while (x % p == 0)
            x /= p;
    }
    return false;
}

int main() {
    int luckyNum[1001], count = 1; int num = 1;
    while (count <= 1000) {
        if (islucky(num)) {
            luckyNum[count++] = num;
        }
        num++;
    }
    int T; cin>>T;
    while (T--) {
        int n;
        cin>>n;
        cout<<luckyNum[n]<<"\n";
    }
}
