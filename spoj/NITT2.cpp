#include <iostream>
#include <cstring>

using namespace std;

char n[55555];

bool check_div(char* n, int base, int div){
    int rem = 0;
    for (int k = 0; n[k] != 0; k++)
        rem = (10*rem +n[k]-'0')%div;
    return (rem == 0);
}


int main() {
    int T;

    cin>>T;
    while (T--) {
        cin>>n;
        if(check_div(n,10,252))
            cout<<"Yes ";
        else
            cout<<"No ";
        if(check_div(n,10,525))
            cout<<"Yes\n";
        else
            cout<<"No\n";

    }
}