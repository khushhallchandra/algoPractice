#include <iostream>
#include <math.h> 

using namespace std;

long long int gcd(long long int n1, long long int n2) {
    if(n1<n2){
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    while ( n2 != 0) {
        long long int r = n1 % n2;
        n1 = n2;
        n2 = r;
    }
    return n1;
}

int main() {
    int N,i;
    cin >> N;
    long long int num1, num2=1, prod=1, g=0, val = 1e9+7, out=1;
    cin >> num1 ;
    prod = prod*num1;
    g = num1;
    if(N!=1){
        cin >> num2;
        prod = prod*num2;
        g= gcd(num1,num2);
    }
    
    for(i = 2; i < N; i++){        
        cin >> num1 ;
        prod = (prod*num1)%val;
        if(g!=1)
            g = gcd(num1,g);
    }
    for(i=0;i<g;i++){
        out *= prod;
        out %= val;
    }
    cout<<out%val<<endl;

    return 0;
}