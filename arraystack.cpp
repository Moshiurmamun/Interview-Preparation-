#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n, arr[100];
	stack<int>st;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=0; i<n; i++){
		st.push(arr[i]);
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}

	return 0;
}

