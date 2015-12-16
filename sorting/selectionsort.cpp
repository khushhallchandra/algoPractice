#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void s_sort(vector<int>& data,int n){
	int min, ind;
	for(int i = 0; i < n; i++){
		min = data[i];
		ind = i;
		for(int j=i+1; j < n; j++){
			if(min > data[j]){
				min = data[j];
				ind = j;
			}
		}
		data[ind] = data[i];
		data[i] = min;
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
	s_sort(vec,n);
	cout << "Sorted data:" << endl;
	for(int i=0;i<n;i++){
		cout<<vec[i] << endl;		
	}
	return 0;
}