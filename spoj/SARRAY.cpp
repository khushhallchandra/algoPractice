#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int temp;
	vector<string> arr[62];
	string str;
	cin>>str;
	int len = str.length();
	for(int i =len-1;i>=0;i--){
		if(str[i]>='0'&&str[i]<='9')
			temp = str[i]-'0';
		else
		if(str[i]>='A'&&str[i]<='Z')
			temp = str[i]-'A' + 10;
		else
		if(str[i]>='a'&&str[i]<='z')
			temp = str[i]-'a' + 36;
		arr[temp].push_back(str.substr(i));
	}
	
	for(int i=0;i<62;i++)
		sort(arr[i].begin(),arr[i].end()); 
	
	for(int i=0;i<62;i++)
		for(int j=0;j<arr[i].size();j++)
		    cout<<len-arr[i][j].size()<<endl;	

	return 0;
}
