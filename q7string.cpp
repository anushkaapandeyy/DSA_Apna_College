//duplicate char in input
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	unordered_map<char,int>m;
	for(int i=0;str[i]!='\0';i++)
	{
		m[str[i]]++;
	}
	for(auto i: m)
	{
		if(i.second>1)
		{
			cout<<i.first<<" - "<<i.second<<endl;
		}	
	}
	return 0;
}