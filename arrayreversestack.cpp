#include<bits/stdc++.h>
using namespace std;

int rev(int arr[],int n){
	stack <int> st;
	queue <int> qe;
	for(int i=0; i<n; i++){
		qe.push(arr[i]);
	}
	while(!qe.empty()){
		int r = qe.front();
		st.push(r);
		qe.pop();
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main()
{
	int i, n, arr[10];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	rev(arr,n);

	return 0;
}
