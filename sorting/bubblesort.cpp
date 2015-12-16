#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void b_sort(vector<int>& data,int n){	
	for(int i = 0; i < n; i++){
		for(int j=1; j < n-i; j++){
			if(data[j-1] > data[j]){
				int temp=data[j-1];
				data[j-1] = data[j];
				data[j] = temp;
			}
		}
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
	b_sort(vec,n);
	cout << "Sorted data:" << endl;
	for(int i=0;i<n;i++){
		cout<<vec[i] << endl;		
	}
	return 0;
}