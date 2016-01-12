#include <iostream>
#include <set>


using namespace std;

int main(){
    set<int> intSet;
    for(int i = 0; i<10; i++){
        intSet.insert(i);
    }
    
    for(int i = 0; i<10; i++){
        intSet.insert(i);
    }    

    set<int>::const_iterator pos = intSet.begin();
    while( pos != intSet.end()) {
        cout << "value in set = " << *pos << endl;
        pos++;
    }
}