#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];

	while (t--){
		int l, r;
		cin>>l>>r;
		int out = 4;
		for (int i = l; i <= r; i++)
			if (width[i] < out)
				out = width[i];
		cout << out << endl;
	}
}