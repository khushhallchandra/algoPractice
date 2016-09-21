void printMaxSumIS(int arr[], int n){ 
    L[0].push_back(arr[0]);
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) { 
            if ((arr[i] > arr[j]) && (findSum(L[i]) < findSum(L[j]))) 
                L[i] = L[j]; }               L[i].push_back(arr[i]); 
}
int main(){
}
