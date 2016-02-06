#include <iostream>

using namespace std;

int lx=0,ly=0,rx=0,ry=0;

void point(int x, int y){
    if(!(lx||ly||rx||ry))
        lx=x,rx=x,ly=y,ry=y;
    else
    if(((x<lx)||(x>rx))||((y<ly)||(y>ry))){
        if(x<lx)
            lx=x;
        else
        if(x>rx)
            rx=x;
        if(y<ly)
            ly=y;
        else
        if(y>ry)
            ry=y;             
    }    

}
int main() {
    int T,N;
    char ob;
    cin>>T;
    
    while (T--) {
        lx=0,ly=0,rx=0,ry=0;
        cin>>N;
        while(N--){
            cin>>ob;
            if(ob=='p'){
                int x,y;
                cin>>x>>y;
                point(x,y);                
            }
            else
            if(ob=='c'){
                int x,y,r;
                cin>>x>>y>>r;
                point(x-r,y-r);
                point(x+r,y+r);                
                 
            }            
            else
            if(ob=='l'){
                int x1,y1,x2,y2;
                cin>>x1>>y1>>x2>>y2;
                point(x1,y1);
                point(x2,y2);
                               
            }  
        }
        cout<<lx<<" "<<ly<<" "<<rx<<" "<<ry<<endl;
    }
    return 0;
}
