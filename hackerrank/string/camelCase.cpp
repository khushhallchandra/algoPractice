// https://www.hackerrank.com/challenges/camelcase
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int count=1;
    cin >> s;
    int i =0;
    while(s[i]){
        if(isupper(s[i]))
            count++;
        i++;
    }
    cout<<count;
    return 0;
}
