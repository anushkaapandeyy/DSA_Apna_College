//mobile sequence to sentence
//CAPS MEI INPUT
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,output = "";
	cin>>str;
	int n=str.length();
	string s[]={"2","22","222","3","33","333",
	"4","44","444","5","55","555",
	"6","66","666","7","77","777",
	"7777","8","88","888","9","99","999","9999"};
	for(int i=0;i<n;i++)
	{
		if(str[i]==' ')
		{
			output = output+"0";
		}
		else
		{
			int pos = str[i]-'A';
			output = output+s[pos];
		}
	}
cout<<output;
}