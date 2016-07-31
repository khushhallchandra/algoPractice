#include<bits/stdc++.h>

using namespace std;

int LCIS(int arr1[], int n, int arr2[], int m){

    vector<int> table(m, 0);
    int current,result = 0;
 
    for (int i=0; i<n; i++){
        current = 0;
        for (int j=0; j<m; j++){
            if (arr1[i] == arr2[j])
                if (current + 1 > table[j])
                    table[j] = current + 1;
 
            if (arr1[i] > arr2[j])
                if (table[j] > current)
                    current = table[j];
        }
    }

    for (int i=0; i<m; i++)
        if (table[i] > result)
           result = table[i];
 
    return result;
}

int main(){
    int arr1[] = {3, 4, 9, 1};
    int arr2[] = {5, 3, 8, 9, 10, 2, 1};
 
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
 
    cout <<LCIS(arr1, n, arr2, m)<<endl;
    return (0);
}
