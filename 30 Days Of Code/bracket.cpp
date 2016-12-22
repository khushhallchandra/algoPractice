// https://www.hackerrank.com/challenges/ctci-balanced-expressions
#include <bits/stdc++.h>

using namespace std;

bool is_balanced(string expression){

    stack<char> stk;

    int n = expression.length();

    for(int i=0; i<n; i++){
        if(expression[i] == '{' || expression[i] == '(' || expression[i] == '[')
            stk.push(expression[i]);
        else{
            if(stk.size()>0){
                if(expression[i] == '}')
                    if(stk.top() == '{')
                        stk.pop();
                    else
                        return 0;

                else if(expression[i] == ')')
                    if(stk.top() == '(')
                        stk.pop();
                    else
                        return 0;

                else if(expression[i] == ']')
                    if(stk.top() == '[')
                        stk.pop();
                    else
                        return 0;                    
            }
        }
    }

    if(stk.size() != 0)
        return 0;

    return 1;
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