// https://www.hackerrank.com/challenges/ctci-array-left-rotation
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d;
    cin>>n>>d;
    std::vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=d; i<d+n; i++)
        cout<<v[i%n]<<" ";
    cout<<endl;
    return 0;
}
