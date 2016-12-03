#include <bits/stdc++.h>

using namespace std;

#define maxN 201

long long mod = 1000000007LL;

long long solve(string &str1, string &str2) {

}

int main(){
  int T;
  cin >> T;
  string str;
  while (T-- ) {
    cin >> str;
    long long ans = 0;
    for (int i = 1; i < str.size(); i ++) {
      ans += calc(str.substr(i, str.size() - i), str.substr(0, i));
      ans %= mod;
    }
    cout << ans << endl;
  }
  return 0;
}
