#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int n,int sum){
	int *table = new int[sum+1];
	int out;
	table[0] = 0; 

	for (int i = 1;i <= sum;i++)
		table[i] = INT_MAX;

	for (int i = 1;i <= sum;i++){
		for (int j=0; j<n; j++){
			if (coins[j] <= i){
				int temp = table[i-coins[j]];
				if(temp != INT_MAX && temp+1 < table[i])
					table[i] = temp+1;
			}
		}          
	}
	
	out = table[sum];
	delete[] table;
	return out;
}

int main(){
	int coins[] =  {1, 3, 5};
    int n = sizeof(coins)/sizeof(coins[0]);
    int sum= 134;
    cout << "Minimum coins required is \n"<< minCoins(coins, n, sum)<<"\n";
    return 0;
}