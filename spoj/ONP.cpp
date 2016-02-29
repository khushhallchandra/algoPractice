#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

int main (){
    int T, len;
    cin>>T;
    char expr[400];
    stack<char> s;
    while (T--){
        cin>>expr;
        len = strlen(expr);
        for(int i=0;i<len;i++){
            if(isalpha(expr[i]))
                cout << expr[i];
            else if(expr[i] ==')'){
                cout << s.top ();
                s.pop ();
            }
            else if(expr[i]!='(')
                s.push (expr[i]);
        }
        cout<<endl;
    }
    return 0;
}