// https://www.hackerrank.com/challenges/cut-the-sticks

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec(1001,0);
    int N, temp;
    cin >> N;
    for(int i=0; i<N; i++){
        cin>>temp;
        vec[temp] ++;
    }
    cout<<N<<endl;
    for(int i=0; i<1001;i++){
        if(vec[i]!=0 ) {
            N -= vec[i] ;
            if(N==0)
                break;
            cout<<N<<endl;
        }
    }  
    return 0;
}