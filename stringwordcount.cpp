#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,cnt=1;
	char arr[1000], rev[1000];
	gets(arr);
	n=strlen(arr);
	for(i=0; i<=n-1; i++){
		if( arr[i] == ' ' || arr[i]=='\n' ){
			cnt++;

		}
	}
	cout<<"Number of word:"<<cnt;

	return 0;
}
