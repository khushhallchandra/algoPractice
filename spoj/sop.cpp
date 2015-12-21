# include <iostream>

using namespace std;

unsigned long long int sop(unsigned long long int num){
	unsigned long long int sum = 0, q;
	for(unsigned long long int i = 1; i <= num; i++){
		q = num/i;
		sum = sum + (i * q);
	}
	return sum;
}

int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		unsigned long long int num;
		cin >> num;
		cout<< sop(num)%1000000007 <<endl;
	}
	return 0;
}