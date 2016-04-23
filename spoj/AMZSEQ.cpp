#include <iostream>

using namespace std;

int mem[1000][3];
int main() {
    int N;
    cin >> N;
    mem[1][0] = mem[1][1] = mem[1][2] = 1;
    for (int i = 2; i <= N; i++) {
        mem[i][0] = mem[i-1][0] + mem[i-1][1];
        mem[i][1] = mem[i-1][0] + mem[i-1][1] + mem[i-1][2];
        mem[i][2] = mem[i-1][1] + mem[i-1][2];
    }
    cout << mem[N][0] + mem[N][1] + mem[N][2] << endl;
}
