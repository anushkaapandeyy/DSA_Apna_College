//Removing consecutive characters
#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
stack<char>st;
for(int i=0;s[i]!='\0';i++)
{
	if(st.empty()==1 || (st.top()!=s[i] && st.empty()==0))
		st.push(s[i]);
}
string res;
while(st.empty()==0)
{
	res+=st.top();
	st.pop();
}
reverse(res.begin(),res.end());
cout<<res;
return 0;
}