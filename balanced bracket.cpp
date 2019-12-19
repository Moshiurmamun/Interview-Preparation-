#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	stack<char>s;
	string a;
	cin>>a;
	for(i=0;i<a.size();i++){
		if(a[i]=='(')
				s.push(a[i]);
		else if(a[i]==')'){
			if(s.top()=='(')
			s.pop();
		}
		else if(a[i]=='[')
				s.push(a[i]);
		else if(a[i]==']'){
			if(s.top()=='[')
			s.pop();
		}
	}

	if(s.empty())
		printf("Balanced");
	else
		printf("Not balanced");

	return 0;

}
