// Review tempelate concepts

#include <iostream>
 
using namespace std;

template<typename T>

T add(T n1,T n2){
    return (n1+n2);
}
 
template <typename M, typename N>

bool isEqual (M a, N b){
  return (a==b);
}

int main(){
	cout<< add(1,2) << endl;
	cout<< add(1.3,1.6) <<endl;
  	if (isEqual(1,1.0))
    	cout << "numbers are equal\n";
  	else
    	cout << "numbers are not equal\n";	
}