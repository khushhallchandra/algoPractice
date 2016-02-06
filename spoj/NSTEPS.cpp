#include <iostream>

using namespace std;

int main(){
	int T,row,col,res;
	cin>>T;

	while(T--){
		cin>>row>>col;
		res=2*row;
		if((row%2)!=0)
			res--;
		if(col==row-2)
			res-=2;
		else 
		if((col!=row)){
		cout<<"No Number"<<endl;
		continue;
		}
		cout<<res<<endl;
	}
	return 0;
}
