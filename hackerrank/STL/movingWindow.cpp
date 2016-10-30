#include <bits/stdc++.h>
#include<deque>

using namespace std;
void printKMax(int arr[], int n, int k){
    vector <int> max_left(n);
    vector <int> max_right(n);
    max_left[0] = arr[0];
    max_right[n-1] = arr[n - 1];
    for (int i = 1; i < n; i++) {
        max_left[i] = (i % k == 0) ? arr[i] : max(max_left[i - 1], arr[i]);

        int j = n - i - 1;
        max_right[j] = (j % k == 0) ? arr[j] : max(max_right[j + 1], arr[j]);
    }
    for (int i = 0, j = 0; i + k <= n; i++) {
        cout<<max(max_right[i], max_left[i + k - 1])<<" ";
    }
    cout<<endl;
}


int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}

