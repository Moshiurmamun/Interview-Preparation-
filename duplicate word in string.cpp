#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	str = str + " ";
	int ini = 0;
	int last;
	vector<string>v;
	for(int i=0; i<str.size(); i++){
		if(str[i]==' '){
			string temp;
			for(int j=ini;j<i;j++){
				temp.push_back(str[j]);
			}
			v.push_back(temp);
			ini  = i+1;
		}
	}

	int flag=1;
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]==v[j]){
				flag=0;
			}
		}
	}
	if(flag) cout<<"No duplicate";
	else cout<<"Duplicate";



}
