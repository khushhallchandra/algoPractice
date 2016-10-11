// https://www.hackerrank.com/challenges/bigger-is-greater

#include <bits/stdc++.h>

using namespace std;

int  main(){
	int T ;
	cin>>T;
	string str; 
	while(T--){
		cin >> str;
		cout << str.length()<<"\n";
		sort(str);

	}
	return 0;
}