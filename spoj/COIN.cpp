#include <iostream>
#include <stdio.h>

#define MAX(x,y) (x>y)?x:y

using namespace std;

long long dp[1000001]={0};
long long s=0;
long long calc(long long n){
	s=0;
	if(n<12)
	     return n;
	else {
	  if(dp[n])
	  	  return dp[n];
	  else{
	      s=calc(n/2)+calc(n/3)+calc(n/4);
	      dp[n]=MAX(s,n);
	      return dp[n];
	  }
	}
}

int main(){
    long long n;
    while (scanf("%lld",&n)!=EOF)
        cout<<calc(n)<<"\n";
    return 0;
}
