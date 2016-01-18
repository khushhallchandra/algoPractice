#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main(){
    deque <int> deq;

    deq.assign (5, 1);
    deq.push_back (2);
    deq.push_front (3);

    deque<int>::const_iterator pos = deq.begin();
    while( pos != deq.end()) {
        cout << "value in deque = " << *pos << endl;
        pos++;
    }

    deq.pop_front();
    deq.pop_back();
    pos = deq.begin();
    cout<<"Print again"<<endl;
    while( pos != deq.end()) {
        cout << "value in deque = " << *pos << endl;
        pos++;
    }    

}