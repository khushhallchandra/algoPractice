//https://www.hackerrank.com/challenges/stockmax
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int T,N,price,temp;
    cin>>T; 
    while(T--){
        cin>>N; 
        vector <int> stock_price;
        for (int i=0; i<N; ++i){
            cin>>price;
            stock_price.push_back(price);
        }
        if(N==0 || N==1) 
            continue;
        temp = 0;
        long long int out = 0;

        temp = stock_price[N-1];
        for(int i = N-1; i >= 0; i--){
            if(stock_price[i] > temp){
                temp = stock_price[i];
            }            
            out += (temp - stock_price[i]);
        }
        cout<<out<<endl;
    }
  return 0;
}