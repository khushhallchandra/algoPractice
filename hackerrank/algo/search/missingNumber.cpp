//https://www.hackerrank.com/challenges/missing-numbers
#include <bits/stdc++.h>

using namespace std;

int main(){
 
    int n, m;
    cin>>n;
    std::vector<int> b(n);
    for(int i=0;i<n;i++)
    	cin>>b[i];

    cin>>m;
    std::vector<int> a(m);
    for(int i=0;i<m;i++)
    	cin>>a[i];    
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());

    int i=0,j=0;
    while(i<m && j<n){

    	if (binary_search (a.begin()+i, a.end(), b[j])){
    		i++;
    		j++;
    	}
    	else{
    		cout<<a[i]<<" ";
    		i++;
    	}
    }
    return 0;
}