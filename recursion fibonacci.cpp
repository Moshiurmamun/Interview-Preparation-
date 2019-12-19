#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n, int i, int j);

int main()
{
	int i,j,n,f;
	cout<<"Enter number range: ";
	cin>>n;
	cin>>i>>j; //first 2 values
	cout<<i<<" "<<j<<" ";
	fibonacci(n-2,i,j);
	return 0;
}
int fibonacci(int n, int i, int j)
{
	int sum;
	if(n>0){
		sum = i+j;
		cout<<sum<<" ";
		i = j;
		j = sum;
		fibonacci(n-1,i,j);
	}

}
