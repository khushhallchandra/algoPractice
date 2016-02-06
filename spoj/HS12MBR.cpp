#include <iostream>

using namespace std;

int main() {
    int T,N,lx=0,ly=0,rx=0,ry=0;
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
            else
            if(ob=='c'){
                int x,y,r;
                cin>>x>>y>>r;
                if(!(lx||ly||rx||ry))
                    lx=x-r,rx=x+r,ly=y-r,ry=y+r;
                else
                if(((x-r<lx)||(x+r>rx))||((y-r<ly)||(y+r>ry))){
                    if(x-r<lx)
                        lx=x-r;
                    if(x+r>rx)
                        rx=x+r;
                    if(y-r<ly)
                        ly=y-r;
                    if(y+r>ry)
                        ry=y+r;             
                }                
            }            
            else
            if(ob=='l'){
                int x1,y1,x2,y2;
                cin>>x1>>y1>>x2>>y2;
                if(!(lx||ly||rx||ry))
                    lx=x1,rx=x2,ly=y1,ry=y2;
                else
                if(((x1<lx)||(x2>rx))||((y1<ly)||(y2>ry))){
                    if(x1<lx)
                        lx=x1;
                    if(x2>rx)
                        rx=x2;
                    if(y1<ly)
                        ly=y1;
                    if(y2>ry)
                        ry=y2;             
                }                                
            } 
 
        }
        cout<<lx<<" "<<ly<<" "<<rx<<" "<<ry<<endl;
    }
    return 0;
}
