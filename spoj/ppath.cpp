#include<bits/stdc++.h>

using namespace std;

bool prime[10005];
bool visit[10005];
int dist[10005];

void sieve(){
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int p=2; p*p<=n; p++){
        if (prime[p] == true){
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
}
