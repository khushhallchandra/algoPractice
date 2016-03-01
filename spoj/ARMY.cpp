#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    int T, n1, n2,i;
    int godz[100000],mgodz[100000];
    cin>>T;
    while (T--){
        cout<<"\n";
        cin>>n1>>n2;
        for(i=0;i<n1;i++) 
            cin>>godz[i];
        for(i=0;i<n2;i++) 
            cin>>mgodz[i];
        if(*max_element(godz,godz+n1) >= *max_element(mgodz,mgodz+n2))
            cout<<"Godzilla";
        else
            cout<<"MechaGodzilla";
        cout<<endl;
    }
    return 0;
}