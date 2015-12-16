#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void i_sort(vector<int>& data,int n){
	int val,j;
	for(int i=1;i<n;i++){
		val = data[i];
		for(j=i-1; j>=0;j--){
			if(val < data[j] ){
				data[j+1] = data[j];
			}
			else				
				break;
			data[j] = val;
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
	i_sort(vec,n);
	cout << "Sorted data:" << endl;
	for(int i=0;i<n;i++){
		cout<<vec[i] << endl;		
	}
	return 0;
}


