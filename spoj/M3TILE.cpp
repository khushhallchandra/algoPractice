#include<iostream>

using namespace std;

int main(){
    int arr[31],n;
    arr[0]=1;arr[1]=0;
    arr[2]=3;arr[3]=0;
    for(int i=4;i<31;i++)
        arr[i] = 4*arr[i-2] - arr[i-4];

    while(1){
        cin>>n;
        if(n==-1)
            break;
        cout<<arr[n]<<endl;
    }
    return 0;
}
