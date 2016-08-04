#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() { 
    int n, i, temp;
    vector<int> v;
    cin>>n;
    for(i = 0;i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
