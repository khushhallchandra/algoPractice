#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int hotels, money, arr[300000], i,n, sum, j, maxMoney;
    cin>>hotels>>money;
    for(i=0;i<hotels;i++)
        scanf("%d",&arr[i]);
    
    sum=0,n=0,j=0,maxMoney=0;
    for(i=0;i<hotels;i++){
        if(sum+arr[i]<money){                
            sum += arr[i]; 
            n++;    
        }
        else{
            while(sum+arr[i]>money){
                sum -= arr[j];
                n--;
                j++;
            }
        sum += arr[i];
        n++;   
        }
        if(maxMoney<=sum){
            maxMoney= sum;    
        }
    }
    cout << maxMoney<<"\n";
    
    return 0;
}