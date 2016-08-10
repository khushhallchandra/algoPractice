// https://www.hackerrank.com/challenges/insertion-sort
// using naive method

#include <bits/stdc++.h>

using namespace std;

int main(){
    int T,n,len,temp;
    
    int count;
    cin>>T;
    while(T--){
    	count = 0;
    	cin>>n;
    	vector <int>vec(n);
    	for(int i=0;i<n;i++){
    		cin>>temp;
    		vec[i] = temp;
    		len = i;
    		for(int j =len-1;j>=0;j--){
    			if(vec[j]>temp){
    				count++;
    				vec[j+1] = vec[j];
    				vec[j] = temp;
    			}
    			else
    				break;
    		}
    	}
    	cout<<count<<"\n";
    }
    return 0;
}