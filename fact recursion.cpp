#include<bits/stdc++.h>
using namespace std;
long factorial(int n);
int main()
{
	int n;
	long f;
	cin>>n;

	if(n<0)
		cout<<"Negative integers is not defined";
	else{
		f = factorial(n);
		cout<<n<<"!"<<"="<<f;
	}
	return 0;
}
long factorial(int n)
{
	if(n==0)
		return 1;
	else
		return (n * factorial(n-1));
}
