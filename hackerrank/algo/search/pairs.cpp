//https://www.hackerrank.com/challenges/pairs
#include <bits/stdc++.h>

using namespace std;

int main(){
 
    int n, k;
    cin>>n>>k;
    vector <int> vec(n);
    for(int i=0;i<n;i++)
    	cin>>vec[i];
    sort(vec.begin(),vec.end());
    int count =0;
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(vec[j]-vec[i]>k)
    			break;
    		else
    		if(vec[j]-vec[i]==k)
    			count++;
    	}
    }
    cout<<count;
    return 0;
}