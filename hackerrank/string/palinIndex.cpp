	// https://www.hackerrank.com/challenges/palindrome-index
#include <bits/stdc++.h>
using namespace std;

string str;

bool isPalindrome(int s,int e){
	while(s<e){
		if(str[s] != str[e]){
			return 0;
			break;
		}
		s++;
		e--;
	}
	return 1;
}

int main(){
	int T,l;
	cin>>T;
	while(T--){
		cin>>str;
		l = str.length();

		if(isPalindrome(0,l-1)){
			cout<<"-1\n";
			continue;
		}

		for(int i=0;i<l/2;i++){
			if(isPalindrome(i+1,l-1-i)){		
				cout<<i<<"\n";
				break;
			}
			if(isPalindrome(i,l-1-1-i)){
				cout<<l-1-i<<"\n";
				break;
			}			
		}
	}
	return 0;
}