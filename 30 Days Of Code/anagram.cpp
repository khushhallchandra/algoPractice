// https://www.hackerrank.com/challenges/ctci-making-anagrams
#include <bits/stdc++.h>

using namespace std;

int number_needed(string a, string b) {
    std::vector<int> v1(26,0);
    std::vector<int> v2(26,0);
    int n1 = a.length();
    int n2 = b.length();

    for(int i=0; i<n1; i++)
        v1[a[i]-'a']++;

    for(int i=0; i<n2; i++)
        v2[b[i]-'a']++;

    int count = 0;
    for(int i=0; i<26; i++)
        count += abs(v2[i] - v1[i]);
    
    return count;
}

int main(){
    string a, b;
    cin>>a>>b;
    cout<<number_needed(a, b) << endl;
    return 0;
}