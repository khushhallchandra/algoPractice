#include<iostream>
#include<algorithm>

using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
  int T,a,b,c;
  cin>>T;
  while(T--){
    cin>>a>>b>>c;
    if(c>a && c>b)
      printf("-1\n");
    else if(c%gcd(a,b) != 0)
      printf("-1\n");
    else if(c==a || c==b)
      printf("1\n");
    else
      // do here
}
return 0;
}
