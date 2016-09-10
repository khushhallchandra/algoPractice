// https://www.hackerrank.com/challenges/insertionsort1

#include <bits/stdc++.h>

using namespace std;

int main(){
	int s;
	vector <int> vec(1000);
	cin>>s;
	for (int i = 0; i < s; i++)
		cin >> vec[i];
	//find the position of the last element
	int ind = 0, val = vec[s - 1];
	for (int i = 0; i< s - 1; i++){
		if (vec[i] < val && vec[i + 1] > val){
			ind = i + 1;
			break;
		}
	}

	for (int i = s - 1; i > ind; i--){
		vec[i] = vec[i - 1];
		for (int j = 0; j < s; j++)
			cout << vec[j] << " ";
		cout<<"\n";
	}
	//insert to the required position
	vec[ind] = val;
	for (int j = 0; j < s; j++)
		cout << vec[j] << " ";
	cout<<"\n";
	return 0;
}