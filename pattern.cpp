#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n, cnt=1;

	cout<<"Enter value: ";
	cin>>n;

	for(i=1; i<=n; i++){
		for(j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(k=1; k<=cnt;k++){
			cout<<"*";
		}
		cout<<endl;
		cnt = cnt+2;
	}
	return 0;
}
