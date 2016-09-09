// https://www.hackerrank.com/challenges/maximizing-xor

#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int l, r;
	int out = 0;
	cin>>l>>r;
	bool check = 0;
	for (int i = 30; i >= 0; i--){
		int val1 = l & (1 << i);
		int val2 = r & (1 << i);
		if(val1 != val2)
			check = 1;
		if(check)
			out |= (1 << i);
	}
	cout<<out<<endl;
	return 0;
}