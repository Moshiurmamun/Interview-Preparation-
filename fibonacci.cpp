#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r,i=0,j=1,f;
	cout<<"Enter the number range:";
	cin>>r;
	cout<<"Fibonacci series: ";
	cout<<i<<" "<<j<<" ";

	for(k=2; k<r; k++){
		f = i+j;
		i=j;
		j=f;
		cout<<j<<" ";
	}
	return 0;
}
