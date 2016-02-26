#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	long long num, sqr[1000001];
	int T,i,j;
	for (i=0; i<=1000000; i++)
		sqr[i]=(long long)i*i;

	cin>>T;
	while(T--){
		cin>>num;
		i = 0, j = sqrt(num);
		while (i<=j){
			if (sqr[i]+sqr[j]==num)
				break;
			else if (sqr[i]+sqr[j]<num)
				i++;
			else
				j--;
		}
		if (sqr[i]+sqr[j]==num)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}