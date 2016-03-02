#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int T, maxStation, maxPeople, arr[100000], i,n, sum, sSeen, j, pSeen;
    cin>>T;
    while(T--){
        cin>>maxStation>>maxPeople;
        for(i=0;i<maxStation;i++)
            scanf("%d",&arr[i]);
        
        sum=0,n=0,j=0,sSeen=0,pSeen=0;
        for(i=0;i<maxStation;i++){
            if(sum+arr[i]<maxPeople){                
                sum += arr[i]; 
                n++;    
            }
            else{
                while(sum+arr[i]>maxPeople){
                    sum -= arr[j];
                    n--;
                    j++;
                }
            sum += arr[i];
            n++;   
            }
            if(sSeen<n ||( sSeen==n &&pSeen>sum)){
                sSeen = n;
                pSeen= sum;    
            }
        }
        cout << pSeen <<" "<<sSeen<<"\n";
    }
    return 0;
}