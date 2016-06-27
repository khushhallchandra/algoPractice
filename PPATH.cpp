#include<bits/stdc++.h>

using namespace std;
#define MAX 10001

bool prime[MAX];
bool visit[MAX];
int dist[MAX];

void sieve(){
	int n = MAX;
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

void conv_to_arr(int digit[],int n){
	for(int i=0;i<4;i++){
		digit[i] = n%10;
		n /= 10;
	}
}

int main(){
	int T;
	sieve();
	scanf("%d",&T);
 	while(T--){
 		queue<int> q;
 		int num1, num2, i, digit[4];
 		scanf("%d%d",&num1,&num2);
 		memset(dist,-1,sizeof(dist));
 		memset(visit,false,sizeof(visit));
 		if(num1 == num2){
 			printf("0\n");
   			continue;
   		}   		
		q.push(num1);
		dist[num1] = 0;
		visit[num1] = true;

 		while(!q.empty()){
 			int val = q.front();
 			if(val == num2)
 				break;
 			for(i= 0; i<4; i++){
        	conv_to_arr(digit,val);
                for(int j= 0; j<10; j++){  
              		digit[i] = j;
         			int temp = (digit[3] *1000)  + (digit[2] *100)   + (digit[1] * 10) + (digit[0]);
         			if(!visit[temp] && prime[temp] && temp >= 1000) {
	               		visit[temp] = true;
	               		q.push(temp);
	               		dist[temp] =  dist[val] + 1;
                	}
       			} 
     		}	
     		q.pop();
  		}
  		if(dist[num2]==-1)
  			printf("Impossible\n");
    	else
    		printf("%d\n",dist[num2]);
	}
 return 0;
} 
