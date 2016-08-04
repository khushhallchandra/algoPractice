#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n,i,cs,temp;
    set<int>st;
    set<int>::iterator it;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>cs>>temp;
        if(cs==1)
            st.insert(temp);
        else
        if(cs==2)
            st.erase(temp);
        else{
            it = st.find(temp);
            if(it==st.end())
                cout<<"No\n";
            else
                cout<<"Yes\n";
        }
            
    }
    return 0;
}
