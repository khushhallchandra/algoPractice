//https://www.hackerrank.com/challenges/missing-numbers
#include <bits/stdc++.h>

using namespace std;
 
#define MAX 10001
 
int main() {
	std::vector<int> vec(MAX,0);

    int n, temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        vec[temp]+=1;
    }
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        vec[temp]-=1;
    }
    for(int i =0; i<MAX; i++)
        if(vec[i]<0)
        	cout<<i<<" ";

    return 0;
}