#include <iostream>

using namespace std;

int T[400000],A[200000],N,t,i,j,k,out[200000];

void build(int node,int a,int b){
    int mid=(a+b)>>1;
    if(a==b)
        T[node]=1;
    else{
        build(node<<1,a,mid);
        build((node<<1)+1,mid+1,b);
        T[node]=b-a+1;
    }
}

int query(int node,int pos,int a,int b){
    if(a==b){
        --T[node];
        return a;
    }
    int mid=(a+b)>>1;
    --T[node];
    if(pos<=T[node<<1])
        return query(node<<1,pos,a,mid);
    else
        return query((node<<1)+1,pos-T[node<<1],mid+1,b);
}
int main(){
    cin>>t;
    for(int j=1;j<=t ; j++){
        cin>>N;
        int flag = 1;
        for(i=0;i<N;i++){ 
            cin>>A[i];
            if(A[i]>i)
                flag=0;
        }
        if(!flag){
            cout<<"Test : "<<j<<"\n";
            cout<<"-1\n";
            continue;
        }

        build(1,1,N);

        for(i=N-1;i>=0;i--)
            out[i]=query(1,i-A[i]+1,1,N);

        cout<<"Test : "<<j<<"\n";

        for(int i=0;i<N;i++)
            cout<<out[i]<<" ";

        cout<<"\n";
    }
    return 0;
}
