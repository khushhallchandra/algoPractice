#include <iostream>
#include <math.h> 

using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        unsigned long long num,sum=0,root;
        cin >> num ;
        root = sqrt(num);
        for(int j = 1; j <= root; j++){
            if(num%j == 0){
                if(j%4 != 0)
                    sum += j ;
                if((num/j) % 4 != 0)
                    sum += (num/j);
            }
        }
        if(root * root ==num && root%4 != 0)
            sum -= root;
        cout<< 8*sum <<endl;
    }
    return 0;
}