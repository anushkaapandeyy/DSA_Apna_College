//longest substring without repeating characters
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	set<char>s;
	for(int i=0;str[i]!='\0';i++)
	{
		s.insert(str[i]);
	}
	cout<<s.size();
}