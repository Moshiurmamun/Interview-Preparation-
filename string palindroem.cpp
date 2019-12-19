#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int i=0,j,flag=0;
	cout<<"Enter sting: ";
	cin>>s;
	j=s.size()-1;

	while(j>i){
		if(s[i++] != s[j--]){
			flag = 1;
			break;
		}
	}
	if(flag==0)
		cout<<"The string is a palindrome";
	else
		cout<<"The string is not palindrome ";

	return 0;

}
