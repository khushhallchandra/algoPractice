#include<bits/stdc++.h>

using namespace std;

int maxChainLength( vector<pair<int,int> > &arr, int n){
   vector<int> vec(n,1);

   for (int i = 1; i < n; i++ )
      for (int j = 0; j < i; j++ )
         if ( arr[i].first > arr[j].second && vec[i] < vec[j] + 1)
            vec[i] = vec[j] + 1;

   return *max_element(vec.begin(), vec.end());
}

int main(){
    vector<pair<int,int> > arr(4);
    arr[0] = make_pair (5,24);
    arr[1] = make_pair (15,25);
    arr[2] = make_pair (27,42);
    arr[3] = make_pair (50,70);

    int n = arr.size();
    cout<<maxChainLength( arr, n);
    return 0;
}
