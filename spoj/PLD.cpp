#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,tem,count =0,s,e;
    cin>>k;
    string str;
    cin>>str;
    int l = str.length();
   	tem = l-k;
    for(int i=0;i<=tem;i++){
    	s=i;
    	e=i+k-1;
    	count++;
    	while(s<=e){
    		if(str[s]==str[e]){
    			s++;
    			e--;
    		}
    		else{
    			count--;
    			break;
    		}
    	}
    }
    cout<<count;
    return 0;
}
