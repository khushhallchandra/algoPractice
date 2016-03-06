#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char str[50001];
	int T, n;
	cin>>T;
	while(T--){
	  cin>>n;
	  cin>>str;
	  cout<< str[strlen(str)-1]<<"\n";
	}
	return 0;
}
