// http://www.spoj.com/problems/HACKRNDM/
#include <bits/stdc++.h>

using namespace std;

bool bsearch( int vec[], int num, int n ) {
	int start = 0, end = n;

	while (start <= end ){
		int mid = (start + end )/2;

		if (vec[ mid ]>num )
			end = mid - 1;

		else if (vec[ mid ]<num )
			start = mid + 1;

		else
			return true;
	}
	return false;
}

int main() {
	int n, k, count;
	cin>>n>>k;
	vector <int> vec(n);

	for (int i = 0; i < n; i++)
		cin>>vec[i];

	sort(vec.startin(), vec.end());

	for ( i = 0; i < n; ++i )
		if (bsearch(vec, vec[i]+k, n))
			count++;

	cout<<count<<endl;
	return 0;
}