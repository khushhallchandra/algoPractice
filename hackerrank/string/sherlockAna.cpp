// https://www.hackerrank.com/challenges/sherlock-and-anagrams
#include<bits/stdc++.h>

using namespace std;

int main(){
	int T,i,j,len;
	cin>>T;
	string s;
	map<string, int> m;
	while (T--){
		m.clear();
		cin>>s;
		len = s.size();
		for (i = 0; i < len; i++){
			for (j = 1; i + j - 1 < len; j++){
				string t = s.substr(i, j);
				sort(t.begin(), t.end());
				m[t]++;
			}
		}
		long long out = 0;
		map<string, int>::iterator it;
		for (it = m.begin(); it != m.end(); ++it)
			out += (it->second) * (it->second - 1) / 2;
		cout<<out << endl;
	}
	return 0;
}