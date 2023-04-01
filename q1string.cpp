//valid palindrome
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	transform(str.begin(),str.end(),str.begin(),::tolower);
	for(int i=0;str.size();i++)
	{
		if(str[i]>=48 && str[i]<=57)
			continue;
		else
		{

			str.erase(i,1);
			i--;
		}
	}
	int l=0,r=str.size()-1;
	while(l<r)
	{
		if(str[l]!=str[r])
			{
				cout<<"no";
				return 0;
			}
		l++;
		r--;
	}
	cout<<"yes";
return 0;
}
