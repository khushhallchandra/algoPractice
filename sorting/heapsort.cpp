#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void max_heapify(vector<int>& data, int i, int n){
    int j, temp;
    temp = data[i];
    j = 2*i;

    while (j <= n){
    	if (j < n && data[j+1] > data[j])
            j = j+1;

        if (temp > data[j])
            break;

        else
        if (temp <= data[j]){
        	data[j/2] = data[j];
            j = 2*j;
        }
    }
    data[j/2] = temp;
}

void h_sort(vector<int>& data, int n){
    int i, temp;

    for (i = n; i >= 2; i--){
        temp = data[i];
        data[i] = data[1];
        data[1] = temp;
        max_heapify(data, 1, i - 1);
    }
}

void build_maxheap(vector<int>& data, int n){
    int i;

    for(i = n/2; i >= 1; i--){
        max_heapify(data, i, n);
    }
}

int main(){
      vector<int> vec;
      std::ifstream infile("input.txt");
      int val;
      vec.push_back(-1); // just storing some value at 0 position

      while (infile >> val){
            vec.push_back(val);    
      }
      int n=vec.size();
      n--;

      build_maxheap(vec,n);
      h_sort(vec,n);
      cout << "Sorted data:" << endl;
      
      for(int i=1;i<=n;i++){
            cout<<vec[i] << endl;         
      }
      return 0;
}