#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void i_sort(vector<int>& data,int n){
	for(int i=0;i<n;i++){
		//cout<<data[i] << endl;
		data[i]=0;
	}

}

int main(){
	vector<int> vec;
	int i;
	std::ifstream infile("input.txt");
	int val;
	while (infile >> val)
	{
		vec.push_back(val);    
	}
	int n=vec.size();
	cout << n << endl;
	i_sort(vec,n);
	cout << "Sorted data:" << endl;
	for(int i=0;i<n;i++){
		cout<<vec[i] << endl;		
	}
	return 0;
}


