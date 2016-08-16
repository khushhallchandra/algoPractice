#include<bits/stdc++.h>

using namespace std;

int main() {
    string out="pangram";
    string s;
	getline(cin, s);
    int i=0,ch;
    vector<int> vec(26,0);
    // cout<<vec.size()<<vec[0]<<endl;
    // cout<<(int)s[i+1]<<endl<<(int)s[i];
    i=s.length();
    // cout<<i;
    while(i--){
    	ch = s[i];
    	// cout<<ch<<"this is char"<<i<<endl;
    	if(ch>=65 && ch<=90){
    		ch -= 65;
    		// cout<<"kc";
    		vec[ch]++;

    	}
    	else
    	if(ch>=97 && ch<=122){
    		ch-=97;
    		vec[ch]++;
    	}

    }
    i=26;
    while(i--){
    	if(vec[i]==0){
    		out="not pangram";
    		// cout<<vec[i]<<endl;
    	}
    }
    cout<<out;
    return 0;
}