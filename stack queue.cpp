#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int arr[100];
	stack <int> st, st1;
	queue <int> qe;
	for(i=0; i<n; i++){
		cin>>(arr[i]);
		st.push(arr[i]);
		cout<<st.top()<<"\n";
	}
	while(!st.empty()){
		int j = st.top();
		st1.push(j);
		st.pop();
	}
	while(!st1.empty()){
		int k = st1.top();
		qe.push(k);
		st1.pop();
	}
	while(!qe.empty()){
		cout<<qe.front()<<" ";
		qe.pop();

	}

	return 0;
}
