//longest common prefix
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<string>v;
	string str;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		v.push_back(str);
	}
	sort(v.begin(),v.end());
	int nt=v.size();
	string t="";
	string s1=v[0];
	string s2=v[nt-1];
	for(int i=0;i<v[0].size();i++)
	{
		if(s1[i]==s2[i])
		{
			t+=s1[i];
		}
		else
			break;
	}
	cout<<t;
	return 0;
}