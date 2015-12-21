# include <iostream>

using namespace std;

void div(int n, int x, int y){
	//int num =x,i = 2;
	int N=n/x, X;
	if(N*x == n)
		N--;
	for(int i=1; i <=N; i++){
		X=x*i;
		if(X != (X/y)*y)
			cout<< X;	
		if(i!=N)
			cout<<" ";
	}
	cout << endl;
}

int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		int n,x,y;
		cin >> n >> x >>y;
		div(n,x,y);
	}
	return 0;
}