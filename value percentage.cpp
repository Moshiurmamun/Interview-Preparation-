#include<bits/stdc++.h>
using namespace std;
int percentage(float value);
float p;
int cnt=1;
int main()
{
	float value;
	cin>>value;
	value = value/100;
	percentage(value);

	return 0;
}
int percentage(float value)
{
	if(cnt<=100){
		p = value*cnt;
		printf("%3d percent is %.2f\n", cnt, p);
		cnt++;
		percentage(value);
	}
	return 0;
}
