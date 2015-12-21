# include <iostream>

using namespace std;

unsigned long long int rev(unsigned long long int num){
	unsigned long long int r = 0;
	while(num > 0){
		r = r + num % 10;
		num = num / 10;
		r = r * 10;
	}
	return r / 10;
}

int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		unsigned long long int num1,num2;
		cin >> num1 >> num2;
		cout<< rev(rev(num1) + rev(num2)) <<endl;
	}
	return 0;
}