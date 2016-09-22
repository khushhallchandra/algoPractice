// https://www.hackerrank.com/challenges/reduced-string

#include <bits/stdc++.h>

using namespace std;

int main(){
    int len;
    string str;

    cin>>str;
    len = str.length();
    string vec = "";
    char prev = str[0];
    for(int i=1;i<len;i++){
    	if(prev!=str[i])
    		vec += prev;
    	prev = str[i];
    }
   	cout<<vec;
    return 0;
}