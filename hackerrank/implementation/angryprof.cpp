// https://www.hackerrank.com/challenges/angry-professor

#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
    	int n, k, temp, count = 0;
    	cin>>n>>k;
    	while(n--){
    		cin>>temp;
    		if(temp<=0)
    			count++;
    	}
    	if(count>=k)
    		cout<<"NO\n";
    	else
    		cout<<"YES\n";
	}
    return 0;
}
