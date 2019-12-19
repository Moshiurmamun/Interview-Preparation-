#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j, cnt=0;
	char arr[100];
	gets(arr);
	j=strlen(arr);
	for(i=0; i<j; i++){
		if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' ||
		   arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
		   ++cnt;
	}
	printf("Number of vowel: %d", cnt);

	return 0;
}
