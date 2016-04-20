#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    while(1){
        cin>>x>>y>>z;
        if (x == 0 && y == 0 && z == 0)
			return 0;
		if(y - x == z - y)
			cout<<"AP "<<2*z-y<<endl;
		else
			cout<<"GP "<<z*z/y<<endl;
    }
	return 0;
}

