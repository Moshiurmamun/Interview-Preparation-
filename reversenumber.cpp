#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num, r, rev=0;
	cin>>num;

	while(num>0){
		r = num%10;
		rev=rev*10+r;
		num = num/10;
	}
	cout<<rev;

	return 0;
}
