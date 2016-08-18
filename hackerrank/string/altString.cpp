// https://www.hackerrank.com/challenges/alternating-characters

#include<bits/stdc++.h>

using namespace std;

int main() {
	int T,count,l;
	cin>>T;
	string str;
	// vector<char> vec;
	while(T--){
		cin>>str;
		count=0;
		l=str.length();
		if(l<2)
			continue;
		char curr=str[1], prev=str[0];
		for(int i=1;i<l;i++){
			if(str[i]==str[i-1])
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
