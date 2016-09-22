// https://www.hackerrank.com/challenges/string-construction

#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, len, cost;
    string str;
    cin >> N;
    while(N--){
        cin>>str;
        vector<int> vec(26,0);
        len = str.length();
        cost = 0;
        for(int i=0; i<len; i++)
            vec[str[i]-'a'] += 1;
        for(int i=0; i<26; i++)
            if(vec[i]!=0)
                cost++;
        cout<<cost<<"\n";
    }
    return 0;
}