#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void q_sort(vector<int>& data, int left, int right){
      
      int pivot = data[(left + right) / 2];           //Choosing middle element as pivot
      int i = left, j = right;

      while (i <= j){
            while (data[i] < pivot)
                  i++;

            while (data[j] > pivot)
                  j--;

            int tmp;
            if (i <= j){
                  tmp = data[i];
                  data[i] = data[j];
                  data[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            q_sort(data, left, j);

      if (i < right)
            q_sort(data, i, right);
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
      q_sort(vec,0,n-1);
      cout << "Sorted data:" << endl;
      
      for(int i=0;i<n;i++){
            cout<<vec[i] << endl;         
      }
      return 0;
}