#include<iostream>
#include<fstream>
#include <vector>
#include <algorithm>

using namespace std;

void digitSort(vector<int>& data, int n, int pos_mul){
      vector <int> output(n);
      int digits[10] = {0};
 
      for (int i = 0; i < n; i++)
          digits[ (data[i]/pos_mul)%10 ]++;
      //cumulative addition to find the position
      for (int i = 1; i < 10; i++)
          digits[i] += digits[i - 1];

      for (int i = n - 1; i >= 0; i--)    {
          output[digits[ (data[i]/pos_mul)%10 ] - 1] = data[i];
          digits[ (data[i]/pos_mul)%10 ]--;
      }

      for (int i = 0; i < n; i++)
          data[i] = output[i];
}
 
void radix_sort(vector<int>& data, int n){
      int m = *max_element(data.begin(),data.end());

      for (int i = 1; m/i > 0; i *= 10)
          digitSort(data, n, i);
}

int main(){
      vector<int> vec;
      int i;
      std::ifstream infile("input.txt");
      int val;

      while (infile >> val){
            vec.push_back(val);    
      }

      int n = vec.size();
      radix_sort(vec,n);
      cout << "Sorted data:" << endl;
      
      for(int i=0;i<n;i++){
            cout<<vec[i] << endl;         
      }
      return 0;    
}