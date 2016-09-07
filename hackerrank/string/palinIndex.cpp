// https://www.hackerrank.com/challenges/palindrome-index

#include <bits/stdc++.h>

using namespace std;

string str;

bool isPalindrome(int start,int end){
	//[start,end)
	bool out = 1;
	int mid = (start+end)/2;
	for(int i=start;i<=mid;i++){
		if(str[i] != str[end-1-i]){
			out = 0;
			break;
		}
	}
	return out;
}
int main(){
	string str;
	int T;
	cin>>T;
	while(T--){
		cin>>str;
		l = str.length();
		if(isPalindrome(0,l))
			cout<<"-1\n";
		for(int i=0;i<l;i++){
			if(isPalindrome(i+1))
		}

	}
	return 0;
}