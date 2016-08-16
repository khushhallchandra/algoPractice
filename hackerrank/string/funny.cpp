// https://www.hackerrank.com/challenges/funny-string

#include<bits/stdc++.h>

using namespace std;

int main() {
	int T,s,e,l,out=1;
	cin>>T;
	string str;
	while(T--){
		cin>>str;
		l = str.length();
		s=1,e=l-1,out=1;
		while(s<e){
			if(abs(str[s]-str[s-1])!=abs(str[e]-str[e-1])){
				out=0;
				break;
			}
			s++;
			e--;
		}
		if(out)
			cout<<"Funny\n";
		else
			cout<<"Not Funny\n";
	}
	return 0;
}