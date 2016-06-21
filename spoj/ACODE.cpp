#include <iostream>
#include <string.h>

long long dp[5002];
int len;
char str[50002];

long long solve(int i){

	if(i>=len)
		return 1;
	if(dp[i])
		return dp[i];
	if(str[i]=='0')
		return 0;
	long long ret=0;

	ret += solve(i+1);
	if(i+1<len && 10*(str[i]-'0')+str[i+1]-'0' <= 26)
		ret += solve(i+2);
	return dp[i]=ret;
}

int main(){

	while(scanf("%s",str)==1)
	{
		if(str[0]=='0')
			break;
		len = strlen(str);
		cout<<solve(0)<<"\n";
	}
	return 0;
}
