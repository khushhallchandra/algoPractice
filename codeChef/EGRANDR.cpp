#include <iostream>
 
using namespace std;
 
int main(){
    int T,N,fail,score,totS,fullScore;
    cin>>T;
    while(T--){
    	cin>>N;
    	fail=0,totS=0,fullScore=0;
    	for(int i=0; i<N;i++){
    		cin>>score;
    		if(!fail){
        		if(score==2)
        			fail = 1;
        		if(score==5)
        			fullScore = 1;
        		totS += score;
    		}
    	}
    	if((totS >= N*4) && (!fail) && fullScore)
    			cout<<"Yes\n";
    	else
    		cout<<"No\n";
 	}
 	return 0;        
} 
