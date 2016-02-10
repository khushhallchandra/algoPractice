#include<iostream>
#include<limits.h>

using namespace std;

int max(int a, int b) { return (a > b)? a: b; }
int minAttempts(int N, int floors){
	int table [N+1][floors+1];
	int val = 0;

	// When there is one egg, the number
	//of attempts will be equal to floor
	for (int i = 1; i <= N; i++)
    	table[i][0] = 0;

	for(int i = 1;i <= floors;i++)
		table[1][i] = i;
	
	for(int i = 2;i <= N; i++){
		for(int j = 1;j <= floors;j++){
			table[i][j] = INT_MAX;
			for(int k = 1;k <= j;k++){
				val = 1 + max(table[i-1][k-1] ,table[i][j-k]);
				if(val < table[i][j])
					table[i][j] = val;
			}
		}
	}

	return table[N][floors];
}

int main(){
    int nEggs = 2, floors= 6;
    //cin >>nEggs>>floors;
    cout << "Minimum attempts required is \n"<< minAttempts(nEggs, floors)<<"\n";
    return 0;
}