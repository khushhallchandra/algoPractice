#include <iostream>

using namespace std;

int main() {
    int T;
	long long num1,num2,sum,N,diff,i;
    cin>>T;
    while (T--) {
        cin>>num1>>num2>>sum;
        N = (2*sum)/(num1+num2);
        diff = (num2 - num1)/(N - 5);
        cout<<N<<endl;
        num1 -= 3*diff;
        for (i = 0; i < N - 1; i++){
			num1+=diff;
            cout<<num1<<" ";
        }
		num1+=diff;
		cout<< num1<<endl;
    }
}
