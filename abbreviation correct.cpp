#include<bits/stdc++.h>
using namespace std;
int main()
{
    string full,abbr,temp;
    getline(cin, full);
    cin>>abbr;

    temp.push_back(full[0]);

    for(int i=1; i<full.size(); i++){
		if(full[i-1]==' '){
			temp.push_back(full[i]);
		}
    }

    if(temp==abbr){ cout<<"Yes"; }
    else { cout<<"No"<<endl; }

    return 0;
}
