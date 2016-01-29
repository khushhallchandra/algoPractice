#include <iostream>
#include <math.h> 

using namespace std;



int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++){
		unsigned long long num1,num2,root,n1;
		cin >> num1 >> num2;
		if(num1==num2){
			root = sqrt(num1);
			if(root * root == num1)
				cout<< 1 << endl;
			else
				cout<< 0 <<endl;
			continue;
			
		}
		num1 = ceil(sqrt(num1)) ;
		num2 = floor( sqrt(num2) );


		cout<< num2-num1 +1  <<endl;

	}
    return 0;
}
