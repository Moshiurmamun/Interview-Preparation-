#include<bits/stdc++.h>
using namespace std;
int sum(int n);
int main()
{
	int n,r;

	cin>>n;
	r = sum(n);
	cout<<r;
	return 0;
}
int sum(int n)
{
	if(n != 0)
		return n+sum(n-1);
	else
		return n;
}
