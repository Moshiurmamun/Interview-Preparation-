#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag=0;
	stack<char> st;
	queue<char> qu;
	for(int i=0; i<s.size(); i++){
		st.push(s[i]);
		qu.push(s[i]);
	}
	while(!st.empty()){
		if(st.top()!=qu.front()){
			flag = 1;
		}
	    st.pop();
	 	qu.pop();
	}
	if(flag==1)
		printf("NO");
	else
		printf("YES");

	return 0;



}
