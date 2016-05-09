#include <iostream>

using namespace std;

int main(){
	int T, n;
	cin>>T;
	while(T--){
		cin>>n;
		n = (n+1)>>1;
		cout<<n<<endl;
	}
	return 0;
}
