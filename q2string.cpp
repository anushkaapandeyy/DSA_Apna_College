//valid anagram
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	unordered_map<char,int>m;
	for(int i=0;s[i]!='\0';i++)
		m[s[i]]++;
	for(auto i : t)
	{
		m[i]--;
		if(m[i]==0)
			m.erase(i);
	}
	bool flag = m.size()==0? true: false;
	cout<<flag;
}