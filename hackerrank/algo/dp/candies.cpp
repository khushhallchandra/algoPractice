// https://www.hackerrank.com/challenges/candies

#include <bits/stdc++.h>

using namespace std;

int main(){
    long int N;
    cin >> N;
    vector<long int> rating(N);
    vector<long int> rightMin(N, 1);
    vector<long int> leftMin(N, 1);    

    for (long int i = 0; i < N; i++)
        cin >> rating[i];

    for (long int i = N - 2; i >= 0; i--)
        if (rating[i + 1] < rating[i])
            rightMin[i] = 1 + rightMin[i + 1];

    for (long int i = 1; i < N; i++)
        if (rating[i - 1] < rating[i])
            leftMin[i] = 1 + leftMin[i - 1];

    long int total = 0;
    for (long int i = 0; i < N; i++)
        total += max(rightMin[i], leftMin[i]);

    cout << total << endl;

    return 0;
}
