#include <iostream> 

using namespace std; 

int main(){
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		int num = 0, div = 5, count = 0;
		cin >> num;

		while (div <= num){
			count = count + (num / div); 
			div = div * 5; 
		}
		cout << count << endl;
	}
	return 0;
}