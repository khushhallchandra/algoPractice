// https://www.hackerrank.com/challenges/closest-numbers

#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<int> out;
	
	int n;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];
	sort(vec.begin(),vec.end());

	int temp = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		if (vec[i] - vec[i - 1] < temp)
		{
			out.clear();
			temp = vec[i] - vec[i - 1];
			out.push_back(vec[i - 1]);
			out.push_back(vec[i]);
		}
		else if (vec[i] - vec[i - 1] == temp)
		{
			out.push_back(vec[i - 1]);
			out.push_back(vec[i]);
		}
	}

	for (int i = 0; i < (int)out.size(); i++)
		cout << out[i] << " ";
	return 0;
}