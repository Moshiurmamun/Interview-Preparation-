#include<bits/stdc++.h>
using namespace std;
int digit(int n, int factor);

int main()
{
	int n,temp, factor=1;
	cin>>n;
	temp = n;

	while(temp>0){
		temp = temp/10;
		factor = factor*10;
	}

	digit(n, factor);
	return 0;
}
int digit(int n, int factor)
{
	if(factor>1){
		factor = factor/10;
		cout<<n/factor<<" ";

		return digit(n%factor, factor);
	}

}
