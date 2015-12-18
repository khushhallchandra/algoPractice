#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void merge(vector<int>& data, int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 =  end - mid;

    vector<int> left, right;

    for(int i = 0; i < n1; i++)
    	left.push_back(data[start + i]);
    for(int j = 0; j < n2; j++)
        right.push_back(data[mid + 1 + j]);

	int i = 0, j = 0, k = start;

    while (i < n1 && j < n2){
    	if (left[i] <= right[j]){
            data[k] = left[i];
            i++;
        }
        else {
            data[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        data[k] = left[i];
        i++;
        k++;
    }

    while (j < n2){
        data[k] = right[j];
        j++;
        k++;
    }
}

void m_sort(vector<int>& data,int start, int end){
	if(start<end){
		int mid = start + (end - start)/2; 
        m_sort(data, start, mid);
        m_sort(data, mid+1, end);
        merge(data, start, mid, end);
	}	
}

int main(){
	vector<int> vec;
	int i;
	std::ifstream infile("input.txt");
	int val;

	while (infile >> val){
		vec.push_back(val);    
	}
	int n=vec.size();
	m_sort(vec,0,n-1);
	cout << "Sorted data:" << endl;
	
	for(int i=0;i<n;i++){
		cout<<vec[i] << endl;		
	}
	return 0;
}