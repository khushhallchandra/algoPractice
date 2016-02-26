#include <iostream>

using namespace std;

int gcd(int a,int b){
	return (b==0?a:gcd(b,a%b));
}

int main(){
	int T, s1, s2, out;
	cin>>T;	
	while(T--){
		cin>>s1>>s2;
		out = s1-s2;
		if(out<0)
			out=-out;
		if(s1<0) 
			s1 =- s1;
		if(s2<0) 
			s2 =- s2;
		out /= gcd(s1,s2);
		cout<<out<<endl;
	}
	return 0;
}