#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
    }
    for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1]= temp;
				}
		}
    }
    int f=0;

    for(i=0;i+2<n;i++){

		if(a[i]==a[i+1]-1 && a[i+1]==a[i+2]-1)
			f++;

    }
    cout<<f;




}
