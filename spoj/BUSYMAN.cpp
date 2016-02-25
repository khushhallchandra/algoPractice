#include <iostream>
#include <algorithm>

using namespace std;

struct task{
    int start , end;
};

bool compareTask(struct task one, struct task two){
    return (one.end < two.end);
}

struct task a[100001];

int main() {
    int T;
    cin>>T;
    while (T--) {
        int N, out = 0;
        cin >> N;
        for(int i=0;i<N;i++){
            cin >> a[i].start;
            cin >> a[i].end;
        }        

        sort(a,a + N,compareTask);
        int i = 0, last;

        while(i < N){
            last = a[i].end;
            out++;
            while(i<N && a[i].start<last)
                i++;
        }
        cout<<out<<"\n";
    }
    return 0;
}
