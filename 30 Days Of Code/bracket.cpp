// https://www.hackerrank.com/challenges/ctci-balanced-brackets
#include <bits/stdc++.h>

using namespace std;

bool is_balanced(string expression){
    int n = expression.length();
    if(n%2 == 1)
        return false;

    for(int i =0; i<n/2; i++){
        if((expression[i] == '{') && (expression[n-1-i] == '}'))
            continue;
        else
        if((expression[i] == '[') && (expression[n-1-i] == ']'))
            continue;
        else
        if((expression[i] == '(') && (expression[n-1-i] == ')'))
            continue;
        else
            return false; 
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin>>expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}