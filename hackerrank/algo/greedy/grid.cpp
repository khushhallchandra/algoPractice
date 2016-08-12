// https://www.hackerrank.com/challenges/grid-challenge

#include<bits/stdc++.h>

using namespace std;

int main(){
	int T, N, check;
	string temp;
	cin>>T;
	while(T--){
		check=1;
		vector<string> vec;
		cin>>N;
		vector<char> vec1(N);
		for(int i=0;i<N;i++){
			cin>>temp;
			vec.push_back(temp);	
		}
		for(int i=0;i<N;i++)
			sort(vec[i].begin(), vec[i].end());

		for(int j=0;j<N;j++){
			for(int i=0;i<N-1;i++){
				if(vec[i][j]>vec[i+1][j]){
					check = 0;
					break;
				}
			}
			if(check==0)
				break;
		}
		if(check==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}