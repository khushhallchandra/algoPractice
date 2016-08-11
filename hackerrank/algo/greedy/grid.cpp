// https://www.hackerrank.com/challenges/grid-challenge

#include<bits/stdc++.h>

using namespace std;

int main(){
	int T, N, check=1;
	string temp;
	cin>>T;
	while(T--){
		vector<string> vec;
		cin>>N;
		vector<char> vec1(N);
		for(int i=0;i<N;i++){
			cin>>temp;
			vec.push_back(temp);	
		}
		for(int i=0;i<N;i++)
			sort(vec[i].begin(), vec[i].end());
		for(int i=0;i<N;i++){
			if(!is_sorted(vec[i].begin(), vec[i].end())){
				check = 0;
				break;
			}

		}
		if(check==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}