#include<bits/stdc++.h>
using namespace std;
int stringlength(char s[], int l);
int main()
{
	int l=0;
	char s[1000];
	gets(s);
	stringlength(s,l);
	cout<<stringlength(s,l);
}
int stringlength(char s[], int l)
{
	if(s[l] == '\0')
		return l;
	l++;
	return stringlength(s, l);
}
