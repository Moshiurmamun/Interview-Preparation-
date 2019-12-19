#include<bits/stdc++.h>
using namespace std;
int digit(int n);
int cnt=0;
int main()
{
	int n;
	cin>>n;
	digit(n);
	cout<<cnt;
	return 0;
}
int digit(int n)
{
	if(n>0)
	{
		cnt++;
		digit(n/10);
	}
	else
		return 1;
}
